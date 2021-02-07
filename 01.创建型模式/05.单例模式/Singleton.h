/*************************************************************************
	> File Name: Singleton.h
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 14:49:30 2021
 ************************************************************************/

#ifndef _SINGLETON_H
#define _SINGLETON_H

#include <iostream>
#include <mutex>

class Singleton {
public:
    static Singleton *getInstance() {
        if (instance == nullptr) {
            std::unique_lock<std::mutex> lock(m_mutex);
            if (instance == nullptr) {
                instance = new Singleton();
            }
        }
        return instance;
    }

private:
    static Singleton *instance;
    static std::mutex m_mutex;
    Singleton() {}
    ~Singleton() {}
    Singleton(const Singleton &) = delete;
};

Singleton *Singleton::instance = nullptr;
std::mutex Singleton::m_mutex;

#endif
