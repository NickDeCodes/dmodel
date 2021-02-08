/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  2/ 8 11:04:01 2021
 ************************************************************************/

#include <iostream>
#include <memory>
#include "Prototype.h"

int main() {
	// 创建一个boy  a
    Person *a = new Boy(std::string("Ming"), 28);
	a->show();
	// 创建一个Girl  b
    Person *b = new Girl(std::string("Li"), 28);
	b->show();

    std::cout << "this is a clone!" << std::endl;

	// 克隆a--不使用原型模式的写法
    std::shared_ptr<Person> cloneA(new Boy(*dynamic_cast<Boy *>(a)));
	cloneA->show();

	// 克隆b--使用原型模式的写法
    std::shared_ptr<Person> cloneB(b->clone());
	cloneB->show();

	delete b;
	delete a;

	return 0;
}

