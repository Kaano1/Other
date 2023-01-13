#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class triangle
{
	private:
		float sideA;
		float sideB;
		float sideC;
	public:
		triangle(float a, float b, float c);
		~triangle();
		triangle(const triangle &oth);
		bool	is_triangle(float a, float b, float c);
		float	get_A() const;
		float	get_B() const;
		float	get_C() const;
		void	set_value(float a, float b, float c);
		bool	is_equilateral();
		bool	is_scalene();
		bool	is_Isosceles();
		void	triangleType();
		float	calculate();
};

triangle::triangle(float a, float b, float c)
{
	set_value(a, b, c);
	cout << "Triangle created" << endl;
}

triangle::~triangle()
{
	cout << "Triangle destroyed" << endl;
}

triangle::triangle(const triangle& oth)
{
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "Triangle copied to target" << endl;
}

bool	triangle::is_triangle(float a, float b, float c)
{
		if (!((abs(b - c) < a) && (a < b + c)))
			return (false);
		if (!((abs(a - c) < b) && (b < a + c)))
			return (false);
		if (!((abs(a - b) < c) && (c < b + a)))
			return (false);
		return (true);
}

float	triangle::get_A() const
{
	return (sideA);
}

float	triangle::get_B() const
{
	return (sideB);
}

float	triangle::get_C() const
{
	return (sideC);
}

void	triangle::set_value(float a, float b, float c)
{
	while (!(is_triangle(a, b, c)))
	{
		cout << "please try again" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
}

bool	triangle::is_equilateral()
{
	return ((sideA == sideB) && (sideB == sideC));
}

bool	triangle::is_scalene()
{
	if (is_equilateral())
		return (true);
	return ((sideA == sideB) ||
			(sideB == sideC) ||
			(sideC == sideA));
}

bool	triangle::is_Isosceles()
{
	return (!is_equilateral());
}

void	triangle::triangleType()
{
	if (is_equilateral())
		cout << "this is equilater" << endl;
	else if (is_scalene())
		cout << "this is scalene" << endl;
	else if (is_Isosceles())
		cout << "this is Isosceles" << endl;
}

float	triangle::calculate()
{
	float	area;
	
	if (is_equilateral())
	{
		area = (pow(sideA, 2) * sqrt(3) / 4);
		return (area);
	}
	float	s;

	s = (sideA + sideB + sideC) / 2;
	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	return (area);
}
