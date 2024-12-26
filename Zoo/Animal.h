#pragma once
#include <iostream>

class Animal
{
public:
	virtual void makeSound() = 0;
	virtual ~Animal()
	{
		std::cout << "Animal ¼Ò¸êÀÚ È£Ãâ" << std::endl;
	}
};
