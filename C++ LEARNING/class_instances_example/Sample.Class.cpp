#include <iostream>
#include "Sample.Class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor are called" << std :: endl;
    this->foo =42;
    std::cout << "this->foo:" << this->foo << std::endl; 
}

Sample::~Sample(void)
{
    std::cout << "Destructor are called" << std :: endl;
}

void Sample::bar(void)
{
    std::cout<<"member function bar is called" <<std ::endl;
}