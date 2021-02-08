/*************************************************************************
	> File Name: vim main.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  2/ 8 14:31:13 2021
 ************************************************************************/

#include <iostream>
#include "ChainOfResponsibility.h"
using namespace std;

int main() {
    srand(time(0));
    ICar *cars[10];
    for (int i = 0; i < 10; i++) {
        int req = rand() % 3;
        for (auto p = ChainMaster::getInstance(); p; p = p->next) {
            if (p->is_valid(req)) {
                cars[i] = p->do_it();
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cars[i]->run();
    }
    return 0;
}

