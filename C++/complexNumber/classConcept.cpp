#include "complexNumber.h"

int	main(void)
{
	complexNumber first;
	complexNumber second(2, 4);

	first.set_value(2, -5);
	first.displayComplex();
	second.displayComplex();
}