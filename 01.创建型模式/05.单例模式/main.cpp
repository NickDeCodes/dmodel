/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 15:14:11 2021
 ************************************************************************/

#include <iostream>
#include "Singleton.h"

int main() {
    Singleton *t1 = Singleton::getInstance();
    Singleton *t2 = Singleton::getInstance();
    std::cout << t1 << " " << t2 << std::endl;

    return 0;
}
