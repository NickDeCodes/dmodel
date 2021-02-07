/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 17:45:10 2021
 ************************************************************************/

#include <iostream>
#include <ctime>
#include "Factory.h"

int main() {
    CarFactory carF;
    Car *specificCarA = carF.createSpecificCar(BENZ);
    Car *specificCarB = carF.createSpecificCar(BMW);
    Car *specificCarC = carF.createSpecificCar(AUDI);

    specificCarA->run();
    specificCarB->run();
    specificCarC->run();

    delete specificCarA; 
    delete specificCarB; 
    delete specificCarC; 
    return 0;
}
