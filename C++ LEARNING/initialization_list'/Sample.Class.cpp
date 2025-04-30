
#include <iostream>
#include "Sample.Class.hpp"

Sample::Sample(char p1,int p2,float p3):a1(p1),a2(p2),a3(p3)
{
    std::cout << "Constructor are called" << std :: endl;
    std::cout << "this->a1:" << this->a1 << std::endl; 
    std::cout << "this->a2:" << this->a2 << std::endl; 
    std::cout << "this->a3:" << this->a3 << std::endl; 
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor are called" << std :: endl;
}
