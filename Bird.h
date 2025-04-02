#ifndef BIRD_H
#define BIRD_H

#include <string>
#include <iostream>
#include "Pet.h"


class Bird : public Pet{
    private:
    int wingSpan;
    int flightSpeed;

    public:
    // Constructor
    Bird(const std::string& name, int age, int hunger_level, int wingSpan, int flightSpeed);

    void printInfo() const override;
    void makeSound() const override;
};

#endif