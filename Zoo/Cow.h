#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "��������" << std::endl;
	}
	~Cow() override
	{
		std::cout << "Cow �Ҹ��� ȣ��" << std::endl;
	}
};