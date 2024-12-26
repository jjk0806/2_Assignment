#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "음머음머" << std::endl;
	}
	~Cow() override
	{
		std::cout << "Cow 소멸자 호출" << std::endl;
	}
};