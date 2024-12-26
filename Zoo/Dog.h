#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "¿Ð¿Ð¿Ð¿Ð" << std::endl;
	}
	~Dog() override
	{
		std::cout << "Dog ¼Ò¸êÀÚ È£Ãâ" << std::endl;
	}
};
