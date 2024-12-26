#pragma once
#include <iostream>

class Animal
{
public:
	virtual void makeSound() = 0;
	virtual ~Animal()
	{
		std::cout << "Animal �Ҹ��� ȣ��" << std::endl;
	}
};
