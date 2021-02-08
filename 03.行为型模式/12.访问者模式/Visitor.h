/*************************************************************************
	> File Name: Visitor.h
	> Author: 
	> Mail: 
	> Created Time: 一  2/ 8 14:38:01 2021
 ************************************************************************/

#ifndef _VISITOR_H
#define _VISITOR_H

#include <iostream>
#include <ctime>
using namespace std;

class B; // +5
class C; // *2
class D; // -4
class E; // +6
class F; // -7

class A {
public :
    class IVisitor {
    public :
        virtual void visit(A *) = 0;
        virtual void visit(B *) = 0;
        virtual void visit(C *) = 0;
        virtual void visit(D *) = 0;
        virtual void visit(E *) = 0;
        virtual void visit(F *) = 0;
    };
    virtual void Accept(IVisitor *vis) {
        vis->visit(this);
    }
    virtual ~A() {}
};

class B : public A {
public :
    void Accept(IVisitor *vis) {
        vis->visit(this);
    }
};

class C : public A {
public :
    void Accept(IVisitor *vis) {
        vis->visit(this);
    }
};

class D : public A {
public :
    void Accept(IVisitor *vis) {
        vis->visit(this);
    }
};

class E : public A {
public :
    void Accept(IVisitor *vis) {
        vis->visit(this);
    }
};

class F : public A {
public :
    void Accept(IVisitor *vis) {
        vis->visit(this);
    }
};

class OutputVisitor : public A::IVisitor {
public :
    virtual void visit(A *obj) {
        cout << "this is father class A" << endl;
    }
    virtual void visit(B *obj) {
        cout << "this is a class B object" << endl;
    }
    virtual void visit(C *obj) {
        cout << "this is a class C object" << endl;
    }
    virtual void visit(D *obj) {
        cout << "this is a class D object" << endl;

    }
    virtual void visit(E *obj) {
        cout << "this is a class E object" << endl;
    }
    virtual void visit(F *obj) {
        cout << "this is a class F object" << endl;
    }
};

class CalcVisitor : public A::IVisitor {
public :
    CalcVisitor(int val = 1) : val(val) {}
    virtual void visit(A *obj) {}
    virtual void visit(B *obj) { val += 5; }
    virtual void visit(C *obj) { val *= 2; }
    virtual void visit(D *obj) { val -= 4; }
    virtual void visit(E *obj) { val += 6; }
    virtual void visit(F *obj) { val -= 7; }
    int val;
};

#endif
