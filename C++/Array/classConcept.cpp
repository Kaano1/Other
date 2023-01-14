#include "Array.hpp"

int	main(void)
{
	Array matrix;

	cout << "Matrix capacity: " << matrix.get_capacity() << endl;
	cout << "Matrix size: " << matrix.get_size() << endl;

	matrix.addItem(12);
	matrix.addItem(3);
	matrix.addItem(32);
	matrix.addItem(212);
	matrix.addItem(1);
	matrix.addItem(2);
	matrix.addItem(1-2);
	matrix.addItem(122);
	matrix.addItem(3);
	matrix.addItem(3);
	matrix.addItem(3);
	matrix.addItem(3);
	matrix.addItem(232);

	cout << endl;
	matrix.PrintItems();
	cout << endl;
	matrix.removeItemIndex(2);
	cout << endl;
	matrix.removeItem(3);
	cout << endl;
	matrix.PrintItems();

	matrix.findElement(12);
}