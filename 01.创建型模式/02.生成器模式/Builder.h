/*************************************************************************
	> File Name: Builder.h
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 20:03:09 2021
 ************************************************************************/

#ifndef _BUILDER_H
#define _BUILDER_H

#include <iostream>

class Builder {
public:
    Builder() {}   
    virtual ~Builder() {}

    virtual void buildMonitor(const char *str = "default_monitor") {}   

    virtual void buildCpu(const char *str = "default_cpu") {}   

    virtual void buildMemory(const char *str = "default_memory") {}   

};

class Product {
public:
    void monitor(const char *str) {
        std::cout << "monitor is " << str << std::endl;
    }
    void cpu(const char *str) {
        std::cout << "cpu is " << str << std::endl;
    }
    void memory(const char *str) {
        std::cout << "memory is " << str << std::endl;
    }
private:
    char *_str;

};

class DellBuilder : public Builder {
public:
    DellBuilder() {
        std::cout << "Dell is creating...." << std::endl;
    }

    void buildMonitor(const char *str = "") {
        _dell->monitor("BenQ");
    }

    void buildCpu(const char *str = "") {
        _dell->cpu("Intel x86 I7-7700HQ");
    }

    void buildMemory(const char *str = "") {
        _dell->memory("Samsung DDR4 8G");
    }

    Product *getProduct() {
        return _dell;
    }

private:
    Product *_dell;

};

class Director {
public:
    void construct(Builder *b) {
        b->buildMonitor();
        b->buildCpu();
        b->buildMemory();
        std::cout << "install computer is finished." << std::endl;
    }
};

#endif
