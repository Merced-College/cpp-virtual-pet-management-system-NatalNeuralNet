#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <vector>
#include "Pet.h"


class Zookeeper : public Pet{
    private:
    std::vector<Pet*> pets;

    public:
    // Constructor
    
    void addPet(Pet* pet);
    void showPet() const;
    void petSound() const;
    void hungerCheck() const;
};

#endif