#include <iostream>

#include "test_class.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    test_class test;
    test.set_value(8);

    std::cout<< test.m_val << std::endl;


    return 0;
}