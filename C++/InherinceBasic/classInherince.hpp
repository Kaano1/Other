#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "A Constructor Worked" << endl;
		}
		~A()
		{
			cout << "A Constructor Destroyed" << endl;
		}
};

class B
{
	public:
		B()
		{
			cout << "B Constructor Worked" << endl;
		}
		~B()
		{
			cout << "B Constructor Destroyed" << endl;
		}
};

class C : public A, public B
{
	public:
		C()
		{
			cout << "C Constructor Worked" << endl;
		}
		~C()
		{
			cout << "C Constructor Destroyed" << endl;
		}
};
