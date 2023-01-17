#include "saysHi.hpp"

int	main(void)
{
	Person* list[] = {new Turkish("Kaan"), new Turkish("Mehmet"), new DeutchePerson("Tom"), new Person("Helin"), new DeutchePerson("Selena")};
	int		area = sizeof(list) / sizeof(list[0]);
	
	for (int i = 0; i < area; i++)
	{
		for (int j = 0; j < area; j++)
		{
			if (i != j)
				list[i]->saysHi(*list[j]);
		}
		cout << endl;
	}
}
