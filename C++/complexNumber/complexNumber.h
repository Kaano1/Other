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
		void			set_value(int r = 0, int i = 0);
		void			displayComplex();
		complexNumber	added_complex(const complexNumber& oth);
		complexNumber	subtractComplex(complexNumber& oth);
		void			multiplyMinus();
		complexNumber	multiplyConstant();
		complexNumber	multiplyComplex();
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

complexNumber	complexNumber::added_complex(const complexNumber& oth)
{
	complexNumber	result;
	result.real = oth.real + real;
	result.imag = oth.imag + imag;
	return (result);
}

complexNumber	complexNumber::subtractComplex(complexNumber& oth)
{
	complexNumber	send;
	oth.multiplyMinus();
	send.added_complex(oth);
	return (send);
}

void	complexNumber::multiplyMinus()
{
	real *= -1;
	imag *= -1;
}

complexNumber	complexNumber::multiplyConstant(int constant)
{
	complexNumber	result;

	result.real = real * constant;
	result.iamg = imag * constant;
	return (result);
}

complexNumber	complexNumber::multiplyComplex(const complexNumber& oth)
{
	complexNumber	result;

	result.real = real * oth.real - imag * oth.imag;
	result.imag = real * oth.imag + imag * oth.real;
	return (result);
}
