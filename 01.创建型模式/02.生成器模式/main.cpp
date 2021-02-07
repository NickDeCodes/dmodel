/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  2/ 7 20:18:49 2021
 ************************************************************************/

#include <iostream>
#include "Builder.h"
using namespace std;

int main() {
    Builder *builder = new DellBuilder();
    Director dir;
    dir.construct(builder);
    DellBuilder *dell = (DellBuilder *)builder;
    auto few = dell->getProduct();

    std::cout << few << std::endl;
    return 0;
}

