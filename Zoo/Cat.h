#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	void makeSound() override
	{
		std::cout << "�߿˾߿�" << std::endl;
	}
	~Cat() override
	{
		std::cout << "Cat �Ҹ��� ȣ��" << std::endl;
	}
};