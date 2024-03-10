#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog{
    public: 
    explicit Dog(std::string name_param);
    Dog() = default;
    ~Dog();

    std::string get_name() const { return dog_name; }
    void get_name (const std::string & name)
    {
        dog_name = name;
    }

    void print_info(){
        std::cout << "Dog [name: " << dog_name <<"]" << std::endl;
    }
    private: 
    std::string dog_name {"Puffy"};

};

#endif // DOG_H