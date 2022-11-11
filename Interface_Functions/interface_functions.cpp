//
// Created by Manley Gage on 2022-11-06.
//
#include <iostream>
#include <filesystem>

#include "interface_functions.h"

/* https://www.coingecko.com/en/api/documentation
 * https://api.coingecko.com/api/v3/simple/price?ids=bitcoin&vs_currencies=usd
 */

void interface_functions::test_button_fire() {

    std::string parent_dir = std::filesystem::current_path().parent_path();
    std::string db_path = parent_dir + "/database/test.db";

    std::cout << parent_dir << std::endl;
    std::cout << db_path << std::endl;
    std::cout << "Test button was fired" << std::endl;
}
