#include "Zoo.h"

int main()
{
	Zoo zoo;
	
	zoo.addAnimal(new Dog());
	zoo.addAnimal(new Cat());
	zoo.addAnimal(new Cow());
	
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());
	zoo.addAnimal(zoo.createRandomAnimal());

	zoo.performActions();
	return 0;
}