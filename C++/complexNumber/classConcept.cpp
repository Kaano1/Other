#include "complexNumber.h"

int	main(void)
{
	complexNumber first;
	complexNumber second(2, 4);

	first.set_value(2, -5);
	first.displayComplex();
	second.displayComplex();

	cout << "----------------------" << endl;
	first = first.added_complex(second);
	first.displayComplex();
	cout << "----------------------" << endl;
	first = first.subtractComplex(second);
	first.displayComplex();
}