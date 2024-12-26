#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include <vector>

class Zoo
{
private:
    std::vector<Animal*> animals;

public:
    Zoo();

    void addAnimal(Animal* animal);

    void performActions();

    Animal* createRandomAnimal();

    ~Zoo();
};
