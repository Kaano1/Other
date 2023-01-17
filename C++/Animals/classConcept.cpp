#include "HeaderAnimal.hpp"

int	main(void)
{
	Dog		*kevin = new Dog();
	Cat		*charli = new Cat();
	Dock	*namNem = new Dock();
	Animal	*list[] = {kevin, charli, namNem};

	for (int i = 0; i < 3; i++)
	{
		list[i]->talk();
	}
}
