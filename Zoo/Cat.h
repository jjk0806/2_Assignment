#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "具克具克" << std::endl;
	}
	~Cat() override
	{
		std::cout << "Cat 家戈磊 龋免" << std::endl;
	}
};