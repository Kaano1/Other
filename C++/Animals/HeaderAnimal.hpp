#include <iostream>
#include <string>
using namespace std;

class Animal
{
	public:
		virtual void	talk() = 0;
};

class Dog : public Animal
{
	public:
		void	talk()
		{
			cout << "Hav Hav" << endl;
		}
};

class Cat : public Animal
{
	public:
		void	talk()
		{
			cout << "Meov Meov" << endl;
		}
};

class Dock : public Animal
{
	void	talk()
	{
		cout << "Vak Vak" << endl;
	}
};
