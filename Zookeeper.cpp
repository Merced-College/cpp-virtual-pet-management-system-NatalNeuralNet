#include "Zookeeper.h"
#include <iostream>

// Constructor calls Pet constructor with species set to "Dog"
void Zookeeper::addPet(Pet* pet) {
    pets.push_back(pet);
}
void Zookeeper::showPet() const{
    std::cout<< "ZOO ANIMALS\n";
    for (auto& pet : pets){
        pet->printInfo();
        std::cout<< "\n";
    }
}
void Zookeeper::petSound() const{

    std::cout<< "ANIMAL SOUNDS\n";
    for (const auto& pet : pets){
        pet->makeSound();
        std::cout<< "\n";
    }
}

void Zookeeper::hungerCheck() const{
    
    std::cout<< "HUNGER CHECK\n";
    for (const auto& pet : pets){
        if (pet->getHungerLevel() < 4){
            std::cout<< pet->getName() <<" seems hungry we should feed them\n";        
        }
    }

}


