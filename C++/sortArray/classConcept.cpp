#include "Sorted.hpp"

int	main(void)
{
	sorted		sArray;
	unsorted	unArray;

	sArray.addItem(12);
	sArray.addItem(32);
	sArray.addItem(124);
	sArray.addItem(1);
	sArray.addItem(2);
	sArray.addItem(35);
	sArray.PrintItems();

	unArray.addItem(12);
	unArray.addItem(32);
	unArray.addItem(124);
	unArray.addItem(1);
	unArray.addItem(2);
	unArray.addItem(35);
	unArray.PrintItems();

}
