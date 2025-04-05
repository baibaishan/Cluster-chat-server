#ifndef DB_H
#define DB_H

#include <mysql/mysql.h>
#include <muduo/base/Logging.h>
using namespace std;

class MySQL{
public:
    //初始化数据库连接
    MySQL();
    ~MySQL();
    bool connect();
    //更新操作
    bool update(string sql);
    MYSQL_RES* query(string sql);

    //获取连接
    MYSQL *getConnection();
private:
    MYSQL *_conn;
};


#endif