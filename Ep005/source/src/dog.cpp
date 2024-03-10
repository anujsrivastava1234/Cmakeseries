#include "dog.h"
#include <iostream>
 
Dog::Dog(std::string name_param) : dog_name(name_param){
    std::cout << this->dog_name << " Constructor for dog " << dog_name << "called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}