/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/ 6 21:01:43 2021
 ************************************************************************/

#include <iostream>
#include "AbstractFactory.h"

using namespace std;

int main() {
    // 抽象工厂模式
	AbstractFactory *p = new MicrosoftFactory();
	KeyBoard *pKeyBoard = p->createKeyBoard();
	Mouse *pMouse = p->createMouse();
	pKeyBoard->show();
	pMouse->show();

	p = new AppleFactory();
	pKeyBoard = p->createKeyBoard();
	pMouse = p->createMouse();
	pKeyBoard->show();
	pMouse->show();

    delete p;
    delete pKeyBoard;
    delete pMouse;
    return 0;
}

