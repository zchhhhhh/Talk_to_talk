#ifndef USER_H
#define USER_H
#include <QString>
class User
{
public:
    User(QString name="", QString pwd="", QString sex="", QString birthday="", QString major="");

    QString name() const;
    void setName(const QString &name);

    QString pwd() const;
    void setPwd(const QString &pwd);

    QString sex() const;
    void setSex(const QString &sex);

    QString birthday() const;
    void setBirthday(const QString &birthday);

    QString major() const;
    void setMajor(const QString &major);

public:
    QString name_;
    QString pwd_;
    QString sex_;
    QString birthday_;
    QString major_;
};

#endif // USER_H
