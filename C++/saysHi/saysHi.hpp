#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		string per_name;
	public:
		Person(string name) {per_name = name;};
		string	getName() const {return (per_name);};
		virtual string getNotion() const {return (" ");};
		virtual void	saysHi(const Person& oth)
		{
			cout << getName() << " says Hi " << oth.getName() << endl;
		}
};

class DeutchePerson : public Person
{
	public:
		DeutchePerson(string name) : Person(name) {};
		string	getNotion() const
		{
			return ("DeutchePerson");
		}
		void	saysHi(const Person& oth)
		{
			if (getNotion() == oth.getNotion())
				cout << getName() << " says Hallo " << oth.getName() << endl;
			else
				Person::saysHi(oth);
		}
};

class Turkish : public Person
{
	public:
		Turkish (string name) : Person(name) {};
		string	getNotion() const
		{
			return ("Turkish");
		}
		void	saysHi(const Person& oth)
		{
			if (getNotion() == oth.getNotion())
				cout << getName() << " says Merhaba " << oth.getName() << endl;
			else
				Person::saysHi(oth);
		}
};