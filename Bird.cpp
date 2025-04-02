#include "Bird.h"

// Constructor calls Pet constructor with species set to "Dog"
Bird::Bird(const std::string& name, int age, int hungerlevel, int wingSpan, int flightSpeed)
    : Pet(name, "Bird", age, hungerlevel), wingSpan(wingSpan), flightSpeed(flightSpeed) {}

void Bird::printInfo() const {
    Pet::printInfo();  // Call the base class version
    std::cout << "Wing Span: " << wingSpan << std::endl;
    std::cout << "Flight Speed: " << flightSpeed << std::endl;
}

void Bird::makeSound() const {
    std::cout << getName() << " bird: Chirp Chirp!" << std::endl;
}
