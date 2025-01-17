#include "CDataSourceSQLite.h"

#include <QDebug>
#include <QSqlQuery>

CDataSourceSQLite::CDataSourceSQLite()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE"); //QMYSQL
    m_db.setDatabaseName("./stuInfoDB.db"); // 相对路径是相对于.exe所在的文件夹下（即bin文件夹下）
    if(!m_db.open())
    {
        qDebug() << "Failed to Open database";
        return;
    }
    QSqlQuery query;
    //主键是不能重复的，不能为空
    QString sql = QString("create table if not exists tb_stuInfo"
                          "(id int primary key not null,"
                          "name varchar(50),"
                          "sex varchar(2),"
                          "phone varchar(11),"
                          "cet4 int,"
                          "gpa real,"
                          "overallScore real);");
    if(!query.exec(sql))
    {
        qDebug() << "Failed to create table";
        qDebug() << query.lastQuery();
        return;
    }
    m_db.close();
}

CDataSourceSQLite::~CDataSourceSQLite()
{

}

bool CDataSourceSQLite::selectStuInfos(QList<CStuInfo> &stuInfoList)
{
    if(!m_db.open())
    {
        qDebug() << "Failed to Open Database : selectStuInfos";
        return false;
    }
    QSqlQuery query;
    QString sql = "Select * from tb_stuInfo;";
    if(!query.exec(sql))
    {
        qDebug() << "Failed to selcet tb_stuInfo;";
        return false;
    }
    while(query.next())
    {
        CStuInfo stuInfo;
        int id = query.value("id").toInt();
        QString name = query.value("name").toString();
        QString sex = query.value("sex") .toString();
        QString phone = query.value("phone").toString();
        int cet4 = query.value("cet4").toInt();
        double gpa = query.value("gpa").toDouble();
        stuInfo.setData(id,name,sex,phone,cet4,gpa);
        stuInfoList.append(stuInfo);
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::addStuInfo(CStuInfo &stuInfo)
{
    if(!m_db.open())
    {
        qDebug() << "Failed to Open Database : addStuInfo";
        return false;
    }
    QSqlQuery query;
    query.prepare("insert into tb_stuInfo (id,name,sex,phone,cet4,gpa,overallScore)"
                  "values(:id,:name,:sex,:phone,:cet4,:gpa,:overallScore)");
    query.bindValue(":id",stuInfo.id());
    query.bindValue(":name",stuInfo.name());
    query.bindValue(":sex",stuInfo.sex());
    query.bindValue(":phone",stuInfo.phone());
    query.bindValue(":cet4",stuInfo.cet4());
    query.bindValue(":gpa",stuInfo.gpa());
    query.bindValue(":overallScore",stuInfo.overallScore());
    if(!query.exec())
    {
        qDebug() << query.lastQuery();
        m_db.close();
        return false;
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::updateStuInfo(CStuInfo &stuInfo)
{
    if(!m_db.open())
    {
        qDebug() << "Failed to Open Database : addStuInfo";
        return false;
    }
    QSqlQuery query;
    query.prepare("update tb_stuInfo set name=:name,sex=:sex,phone=:phone,cet4=:cet4,gpa=:gpa"
                  ",overallScore=:overallScore where id = :id");
    query.bindValue(":id",stuInfo.id());
    query.bindValue(":name",stuInfo.name());
    query.bindValue(":sex",stuInfo.sex());
    query.bindValue(":phone",stuInfo.phone());
    query.bindValue(":cet4",stuInfo.cet4());
    query.bindValue(":gpa",stuInfo.gpa());
    query.bindValue(":overallScore",stuInfo.overallScore());
    if(!query.exec())
    {
        qDebug() << query.lastQuery();
        m_db.close();
        return false;
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::deleteStuInfo(int id)
{
    if(!m_db.open())
    {
        qDebug() << "Failed to Open Database : deleteStuInfo";
        return false;
    }
    QSqlQuery query;
    QString sql = QString("delete from tb_stuInfo where id = %1").arg(id);
    if(!query.exec(sql))
    {
        qDebug() << "Failed to delete stuInfo!!!";
        m_db.close();
        return  false;
    }

    m_db.close();
    return true;
}
