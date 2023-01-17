#include "Vehicle.hpp"

int	main(void)
{
	Vehicle*	list[] = {new Car("Bmw", 50.324), new Motor("MTR", 76.832)};
	int			which_vehicle = 0;
	char		input;

	do
	{
		fflush(stdin);
		cout << "Enter vehicle input" << endl;
		cin >> which_vehicle >> input;
		switch (input)
		{
		case 'U':
			list[which_vehicle]->increaseSpeed();
			list[which_vehicle]->display();
			break;
		case 'D':
			list[which_vehicle]->decreaseSpeed();
			list[which_vehicle]->display();
			break;
		case 'C':
			list[which_vehicle]->stopEngine();
			list[which_vehicle]->display();
			break;
		case 'S':
			list[which_vehicle]->startEngine();
			list[which_vehicle]->display();
			break;
		default:
			cout << "Enter valid input" << endl;
			break;
		}
	} while (which_vehicle != -1);
	
}