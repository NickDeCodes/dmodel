/*************************************************************************
	> File Name: Factory.h
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 17:19:51 2021
 ************************************************************************/

#ifndef _FACTORY_H
#define _FACTORY_H

#include <iostream>

enum CarType {
    BENZ, 
    BMW,
    AUDI
};

class Car {
public:
    virtual ~Car() {}
    virtual void run() = 0;
    
private:

};

class BenzCar : public Car {
public:
    BenzCar() {}
    virtual void run() {
        std::cout << "Benz run" << std::endl;
    }

private:

};

class BmwCar : public Car {
public:
    BmwCar() {}
    virtual void run() {
        std::cout << "Bmw run" << std::endl;
    }

private:

};

class AudiCar : public Car {
public:
    AudiCar() {}
    virtual void run() {
        std::cout << "Audi run" << std::endl;
    }

private:

};

class CarFactory {
public:
    Car *createSpecificCar(CarType type) {
        switch(type) {
        case BENZ:// 生产奔驰车
            return (new BenzCar());
            break;
        case BMW:// 生产宝马车
            return (new BmwCar());
            break;
        case AUDI:// 生产奥迪车
            return (new AudiCar());
            break;
        default:
            return NULL;
            break;
        }
    }

private:

};

#endif
