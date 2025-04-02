#include "Dog.h"

// Constructor calls Pet constructor with species set to "Dog"
Dog::Dog(const std::string& name, int age, int hunger_level, const std::string& breed,int teethPower)
    : Pet(name, "Dog", age, hunger_level), breed(breed), teethPower(teethPower){}

void Dog::printInfo() const {
    Pet::printInfo();  // Call the base class version
    std::cout << "Breed: " << breed << std::endl;
    std::cout << "Teeth Power: " << teethPower << std::endl;
}

void Dog::makeSound() const {
    std::cout << getName() << " barks: Woof woof!" << std::endl;
}
