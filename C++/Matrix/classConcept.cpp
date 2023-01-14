#include "Matrix.hpp"

int	main(void)
{
	Matrix square;

	square.display();
	square.randomSet();
	square.display();
	square.identityMatrixSet();
	square.display();
	square.set_value(0, 0, 1);
	square.set_value(1, 1, 1);
	square.set_value(2, 2, 1);
	square.set_value(3, 3, 1);
	square.set_value(4, 4, 1);
	square.display();
	cout << endl;
	Matrix one;
	Matrix two;

	one.randomSet();
	one.display();
	cout << endl;
	two.randomSet();
	two.display();
	cout << endl;
	one.addMatrix(two);
}