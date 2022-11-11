//
// Created by Manley Gage on 2022-11-10.
//
#include <iostream>
#include "sqlite_funcs.h"
#include <cstdio>
#include <sqlite3.h>
#include <filesystem>
#include <string>

void sqlite_funcs::create_table(){
    sqlite3 *db = nullptr;
    sqlite3_stmt *stmt = nullptr;
    std::string *table_name = nullptr;

    // Get path to database file according to this files location
    std::string db_path = sqlite_funcs::get_db_path();

    /* Open database */
    int rc = sqlite3_open(db_path.data(), &db);

    if( rc == SQLITE_OK ) {
        fprintf(stdout, "Opened database successfully\n");
    } else {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }

    // Write query and fetch
    constexpr const char* sql = "SELECT count(*) AS num_found FROM sqlite_master WHERE type='table' AND name='{}';";
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    // List out Column names
    int col_count = sqlite3_column_count(stmt);
    for(int i = 0; i < col_count; ++i) {
        printf("%s", sqlite3_column_name(stmt, i));
        if(i < col_count - 1) printf(", ");
    }

    // Add new line to output
    puts("");

    // List out row values
    while(sqlite3_step(stmt) == SQLITE_ROW) {
        for(int i = 0; i < col_count; ++i) {
            printf("%s", sqlite3_column_text(stmt, i));
            if(i < col_count - 1) printf(", ");
        }
        puts("");
    }

    sqlite3_close(db);
    puts("Closed Database Successfully");

    /* Create SQL statement */
//    sql = "CREATE TABLE COMPANY("  \
//      "ID INT PRIMARY KEY     NOT NULL," \
//      "NAME           TEXT    NOT NULL," \
//      "AGE            INT     NOT NULL," \
//      "ADDRESS        CHAR(50)," \
//      "SALARY         REAL );";

}

std::string sqlite_funcs::get_db_path() {
    std::string parent_dir = std::filesystem::current_path().parent_path();
    std::string db_path = parent_dir + "/database/test.db";

    return db_path;
}
