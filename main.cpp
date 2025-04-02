#include <iostream>
#include "Pet.h"
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"
#include "Zookeeper.h"

int main() {

    // Base Pet Objects
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);
    Dog pet3("Buddy", 4, 6, "Labrador", 10);
    Cat pet4("Kitty", 3, 4, "Laser toy", 3);
    Bird pet5("Birdie", 3, 6, 8, 2);
    
    // Info Checks
    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    // Derived Class info check
    std::cout << "\nPet 3 Info:\n";
    pet3.printInfo();

    //std::cout << "\nComparing pets by name: ";
    //int result = pet1.compareTo(pet2);
    //if (result < 0) std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    //else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    //else std::cout << "Both pets have the same name.\n";

    // Pointers to derived class objects
    // Tests sounds

    Pet* myDog = new Dog("Buddy", 4, 2, "Labrador", 10);
    myDog->makeSound();

    Pet* myCat = new Cat("Kitty", 3, 4, "Laser toy", 3);
    myCat->makeSound();

    Pet* myBird = new Bird("Birdie", 3, 6, 8, 2);
    myBird->makeSound();

    // Zookeeper object
    Zookeeper keeper;

    // Adds derived class pointers to vector
    keeper.addPet(myBird);
    keeper.addPet(myCat);
    keeper.addPet(myDog);

    // Zookeeper method testing
    keeper.showPet();
    keeper.petSound();
    keeper.hungerCheck();
    return 0;
}
