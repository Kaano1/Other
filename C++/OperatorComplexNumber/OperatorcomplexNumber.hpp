#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class complexNumber
{
	private:
		int	real, imag;
		friend ostream& operator << (ostream&, const complexNumber&);
		friend istream& operator >> (istream&, complexNumber&);
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
		complexNumber	operator +(const complexNumber& oth);
		complexNumber	operator -(complexNumber& oth);
		complexNumber	operator *(int);
		void			multiplyMinus();
		complexNumber	operator*(const complexNumber&);
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

ostream&	operator<<(ostream& Obje, const complexNumber& com)
{
	if (com.imag >= 0)
		Obje << com.real << "+" << com.imag << "i" << endl;
	else
		Obje << com.real << com.imag << "i" << endl;
	return (Obje);
}

istream& 	operator>>(istream& Obje, complexNumber& com)
{
	Obje >> com.real >> com.imag;
	return (Obje);
}

complexNumber	complexNumber::operator+(const complexNumber& oth)
{
	complexNumber	result;
	result.real = oth.real + real;
	result.imag = oth.imag + imag;
	return (result);
}

complexNumber	complexNumber::operator-(complexNumber& oth)
{
	complexNumber	send;
	oth.multiplyMinus();
	send = *this + oth;
	return (send);
}

void	complexNumber::multiplyMinus()
{
	real *= -1;
	imag *= -1;
}

complexNumber	complexNumber::operator*(int constant)
{
	complexNumber	result;

	result.real = real * constant;
	result.imag = imag * constant;
	return (result);
}

complexNumber	complexNumber::operator*(const complexNumber& oth)
{
	complexNumber	result;

	result.real = real * oth.real - imag * oth.imag;
	result.imag = real * oth.imag + imag * oth.real;
	return (result);
}
