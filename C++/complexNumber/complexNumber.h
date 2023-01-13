#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class complexNumber
{
	private:
		int	real, imag;
	public:
		complexNumber(int r = 0, int i = 0);
		~complexNumber();
		complexNumber(const complexNumber& naber);
		int		getReal() const
		{
			return (real);
		}
		int		getImag() const
		{
			return (imag);
		}
		void	set_value(int r = 0, int i = 0);
		void	displayComplex();
};

complexNumber::complexNumber(int r, int i)
{
	real = r;
	imag = i;
	cout << "created constructor" << endl;
}

complexNumber::~complexNumber()
{
	cout << "Destroyed constructor" << endl;
}

complexNumber::complexNumber(const complexNumber& naber)
{
	real = naber.real;
	imag = naber.imag;
	cout << "Created Copy Constructor" << endl;
}

void	complexNumber::set_value(int r, int i)
{
	real = r;
	imag = i;
}

void	complexNumber::displayComplex()
{
	imag >= 0 ? cout << real << "+" << imag << endl : cout << real << imag << endl;
}
