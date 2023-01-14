#include "triangle.h"

int	main(void)
{
	float a;
	float b;
	float c;

	cout << "please give three number" << endl;
	cin >> a >> b >> c;
	triangle	ucgen(a, b, c);
	triangle	ucgen2(a, b, c);

	cout << "ucgen" << endl;
	cout << "A: " << ucgen.get_A() << endl;
	cout << "B: " << ucgen.get_B() << endl;
	cout << "C: " << ucgen.get_C() << endl;

	ucgen2.set_value(6, 7, 8);
	cout << "ucgen2" << endl;
	cout << "A: " << ucgen2.get_A() << endl;
	cout << "B: " << ucgen2.get_B() << endl;
	cout << "C: " << ucgen2.get_C() << endl;

	ucgen.triangleType();
	ucgen2.triangleType();
	cout << "triangle area: " << ucgen.calculate() << endl;
	cout << "triangle area: " << ucgen2.calculate() << endl;
}