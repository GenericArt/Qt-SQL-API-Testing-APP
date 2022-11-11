//
// Created by Manley Gage on 2022-11-10.
//

#ifndef QTSQLAPP_SQLITE_FUNCS_H
#define QTSQLAPP_SQLITE_FUNCS_H

#include <string>

class sqlite_funcs {
public:
    static void create_table();
private:
    static std::string get_db_path();

};


#endif //QTSQLAPP_SQLITE_FUNCS_H
