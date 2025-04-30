#include <iostream>
#include "Sample.hpp"

Sample::Sample(float const f):pi(f),qd(42){
    std::cout << "Constructor are called" << std ::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor are called " << std ::endl;
}

void Sample::bar(void)
{
    std::cout<< "this->pi : " << this->pi << std ::endl;
    std::cout<< "this->qd : " << this->qd << std ::endl;
    this->qd = 0;
    std::cout<< "this->qd : " << this->qd << std ::endl;
    return;
}
