#include <iostream>
#include <string>
using namespace std;

template <class Type>

class Number
{
private:
	Type data;
public:
	Number(Type main_data = 0)
	{
		data = main_data;
	}
	Type getData()
	{
		return (data);
	}
	Type	operator+(const Number&);
	void	operator+=(Type vl);
	void	operator+=(const Number&);
};

template <class Type>
Type	Number<Type>::operator+(const Number& num)
{
	return (data + num.data);
}

template <class Type>
void	Number<Type>::operator+=(Type vl)
{
	data += vl;
}

template <class Type>
void	Number<Type>::operator+=(const Number& num)
{
	data += num.data;
}
