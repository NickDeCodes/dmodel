/*************************************************************************
	> File Name: Prototype.h
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 20:40:28 2021
 ************************************************************************/

#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

#include <iostream>
#include <string>
#include <memory>

class Person {
public:
	Person(std::string name, int age) : _name(name), _age(age) {}
	virtual ~Person() {}

	virtual void show() {
        std::cout << "I am " << _name << ", and " << _age << std::endl;
	}
	virtual Person *clone() {
		return new Person(*this);
	}

private:
    std::string _name;
	int _age;
};
 
class Boy : public Person {
public:
    Boy(std::string name, int age) : Person(name, age) {}
	~Boy() {}

	virtual void show() override {
		Person::show();
        std::cout << "I am a boy" << std::endl;
	}
	virtual Person *clone() override {
		return new Boy(*this);
	}
};

class Girl : public Person {
public:
    Girl(std::string name, int age) : Person(name, age) {}
	~Girl() {}

	virtual void show() override {
		Person::show();
        std::cout << "I am a Girl" << std::endl;
	}
	virtual Person *clone() override {
		return new Girl(*this);
	}
};
 
#endif

