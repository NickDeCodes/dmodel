/*************************************************************************
	> File Name: ChainOfResponsibility.h
	> Author: 
	> Mail: 
	> Created Time: 一  2/ 8 14:26:11 2021
 ************************************************************************/

#ifndef _CHAINOFRESPONSIBILITY_H
#define _CHAINOFRESPONSIBILITY_H

#include <iostream>
#include <ctime>
using namespace std;

class ICar {
public :
    class IFactory {
    public :
        virtual ICar *crearte() = 0;
    };
    class IHandler {
    public :
        IHandler() : next(nullptr) {}
        virtual bool is_valid(int x) = 0;
        virtual ICar *do_it() = 0;
        IHandler *next;
    };
    virtual void run() = 0;

protected:
    ICar() {}
    ~ICar() {}

};

class BenzCar : public ICar {
public :
    class Facory : public ICar::IFactory, public ICar::IHandler {
    public :
        virtual ICar *crearte() {
            return new BenzCar();
        }
        virtual bool is_valid(int x) {
            return x == 0;
        }
        virtual ICar *do_it() {
            return this->crearte();
        }
    };
    virtual void run() {
        cout << "Benz run" << endl;
    }

private:
    BenzCar() {}

};

class BmwCar : public ICar {
public:
    class Facory : public ICar::IFactory, public ICar::IHandler {
    public :
        virtual ICar *crearte() {
            return new BmwCar();
        }
        virtual bool is_valid(int x) {
            return x == 1;
        }
        virtual ICar *do_it() {
            return this->crearte();
        }
    };
    virtual void run() {
        cout << "Bmw run" << endl;
    }

private:
    BmwCar() {}

};

class AudiCar : public ICar {
public:
    class Facory : public ICar::IFactory, public IHandler {
    public :
        virtual ICar *crearte() {
            return new AudiCar();
        }
        virtual bool is_valid(int x) {
            return x == 2;
        }
        virtual ICar *do_it() {
            return this->crearte();
        }
    };
    virtual void run() {
        cout << "Audi run" << endl;
    }

private:
    AudiCar() {}

};

class ChainMaster {
public:
    static ICar::IHandler *getInstance() {
        if (head == nullptr) {
            buildChain();
        }
        return head;
    }

private :
    static ICar::IHandler *head;
    static void buildChain() {
        head = new BmwCar::Facory();
        head->next = new AudiCar::Facory();
        head->next->next = new BenzCar::Facory();
        return ;
    }
};

ICar::IHandler *ChainMaster::head = nullptr;


#endif
