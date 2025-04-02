#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "Pet.h"


class Dog : public Pet{
    private:
    std::string breed;
    int teethPower;

    public:
    // Constructor
    Dog(const std::string& name, int age, int hungerlevel, const std::string& breed, int teethPower);

    void printInfo() const override;
    void makeSound() const override;
};

#endif