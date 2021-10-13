#include "user.h"

User::User(QString name,
           QString pwd,
           QString sex,
           QString birthday,
           QString major) :
    name_(name), pwd_(pwd),
    sex_(sex), birthday_(birthday),
    major_(major)
{

}

QString User::name() const
{
    return name_;
}

void User::setName(const QString &name)
{
    name_ = name;
}
QString User::pwd() const
{
    return pwd_;
}

void User::setPwd(const QString &pwd)
{
    pwd_ = pwd;
}
QString User::sex() const
{
    return sex_;
}

void User::setSex(const QString &sex)
{
    sex_ = sex;
}
QString User::birthday() const
{
    return birthday_;
}

void User::setBirthday(const QString &birthday)
{
    birthday_ = birthday;
}
QString User::major() const
{
    return major_;
}

void User::setMajor(const QString &major)
{
    major_ = major;
}
