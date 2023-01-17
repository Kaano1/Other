#include "OperatorcomplexNumber.hpp"

int	main(void)
{
	complexNumber first;
	complexNumber second;

	cin >> first;
	cin >> second;

	cout << first;
	cout << second;
	complexNumber	add = first + second;
	complexNumber	neg = first - second;
	complexNumber	attack = first * second;
	complexNumber	nop = first * 5;

	cout << add << endl;
	cout << neg << endl;
	cout << attack << endl;
	cout << nop << endl;

}