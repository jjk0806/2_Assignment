#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "�ппп�" << std::endl;
	}
	~Dog() override
	{
		std::cout << "Dog �Ҹ��� ȣ��" << std::endl;
	}
};
