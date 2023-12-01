//
// Created by Lenovo on 2023/12/1.
//

#include "iostream"
#include "string"

static  int s_Level = 1;
static  int s_Speed = 2;

void initTernaryOperator() {
    s_Speed = s_Level > 5 ? 10 : 5;
    std::string range = s_Level > 10 ? "Expert" : "Rookie";
    std::cout << s_Speed << range << std::endl;
}
