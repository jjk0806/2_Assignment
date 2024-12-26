#pragma once
#include "Zoo.h"
#include <random>

Zoo::Zoo()
{
	animals.reserve(10);
	std::cout << "������ ����" << std::endl;
}

void Zoo::addAnimal(Animal* animal)
{
	animals.push_back(animal);
}

void Zoo::performActions()
{
	for (auto& a : animals)
	{
		a->makeSound();
	}
}

Animal* Zoo::createRandomAnimal()
{
	std::random_device rd;
	std::mt19937 mersenne(rd());
	std::uniform_int_distribution<> dice(0, 2);

	int rand = dice(mersenne);
	std::cout << rand << " ���� ����" << std::endl;

	if (rand == 0)
	{
		std::cout << "�� ����" << std::endl;
		return new Dog();
	}

	else if (rand == 1)
	{
		std::cout << "����� ����" << std::endl;
		return new Cat();
	}

	else if (rand == 2)
	{
		std::cout << "�� ����" << std::endl;
		return new Cow();
	}
	else
		return nullptr;
}

Zoo::~Zoo()
{
	for (auto& a : animals)
		delete a;

	std::cout << "Zoo �Ҹ�" << std::endl;
}