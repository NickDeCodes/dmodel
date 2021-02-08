/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  2/ 8 14:39:11 2021
 ************************************************************************/

#include <iostream>
#include "Visitor.h"
using namespace std;

int main() {
    srand(time(0));
    A *arr[10];
    for (int i = 0; i < 10; i++) {
        switch (rand() % 5) {
            case 0: arr[i] = new B(); break;
            case 1: arr[i] = new C(); break;
            case 2: arr[i] = new D(); break;
            case 3: arr[i] = new E(); break;
            case 4: arr[i] = new F(); break;
        }
    }
    OutputVisitor vis1;
    CalcVisitor vis2;
    for (int i = 0; i < 10; i++) {
        arr[i]->Accept(&vis1);
        arr[i]->Accept(&vis2);
    }
    cout << vis2.val << endl;
    return 0;
}

