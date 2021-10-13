#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include "database.h"
#include "user.h"

DataBase *DataBase::getDatabaseInstence()
{
    static DataBase sqldb;
    return &sqldb;
}

DataBase::DataBase()
{
    //先判断连接是否存在
    if(QSqlDatabase::contains("testConnection"))
    {
        db_ = QSqlDatabase::addDatabase("testConnection");
    }
    else
    {
        //1.加载数据库驱动
        db_ = QSqlDatabase::addDatabase("QSQLITE", "testConnection");
        qDebug () << db_.connectionName();//打印连接名称

        //2.设置数据库名
        db_.setDatabaseName("usr.db");
        qDebug () << db_.databaseName();
    }

    //3.打开数据库
       if(db_.open())
       {
           qDebug() << "open success";
       }
       else
       {
           qDebug() << "open:" << db_.lastError().text();
           return;
       }

       //4.操作数据库：执行sql语句(integer类型的主键会自增)
       QString sql = "create table if not exists t_usr(name varchar(50) primary key, pwd varchar(20), sex varchar(10), birthday varchar(20),  major varchar(20));";
       QSqlQuery query(db_);
       if (query.exec(sql))
       {
           qDebug() << "create success.";
       }
       db_.close();
}


//插入一个用户信息
bool DataBase::insertUsr(User &usr)
{
    QString sql = QString("insert into t_usr values('%1', '%2', '%3', '%4', '%5')")
            .arg(usr.name())
            .arg(usr.pwd())
            .arg(usr.sex())
            .arg(usr.birthday())
            .arg(usr.major());

    // 1.打开数据
    if (!db_.open())
    {
        qDebug() << "open:" << db_.lastError().text();
        return false;
    }

    // 2.执行sql
    QSqlQuery query(db_);
    if (!query.exec(sql))
    {
        qDebug() << "insert:" << query.lastError().text();
        return false;
    }

    //关闭数据库
    db_.close();
    return true;

}


//根据name查找用户
bool DataBase::findUsr(QString name)
{
    QString sql = QString("select name from t_usr where name = :name;");
    //打开数据库
    if(!db_.open())
    {
        qDebug() << "open fail" << db_.lastError().text();
        exit(-1);
    }

    //执行插入操作
    QSqlQuery query(db_);
    query.prepare(sql);
    query.bindValue(":name",QVariant(name));
    query.exec();

    //查询成功
    if(query.next())
    {
        if(name == query.value(0).toString()) //用户存在
        {
           return true;
        }
    }

    //关闭数据库
    db_.close();

    return false;
}

//匹配name和pwd
bool DataBase::judge(QString name, QString pwd)
{
    QString sql = QString("select name, pwd from t_usr where name = :name;");
    //打开数据库
    if(!db_.open())
    {
        qDebug() << "open fail" << db_.lastError().text();
        exit(-1);
    }

    //执行插入操作
    QSqlQuery query(db_);
    query.prepare(sql);
    query.bindValue(":name",QVariant(name));
    query.exec();

    //匹配密码
    if(query.next())
    {
        if(!(pwd == query.value(1).toString()))
        {
          return false;
        }
    }

    //关闭数据库
    db_.close();

    return true;
}
