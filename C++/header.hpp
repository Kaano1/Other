#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string	name, surname, ID;
	public:
		Student();
		Student(const Student &oth);
		~Student();
		Student(string, string);
		Student(string, string, string);
		string	get_name();
		string	get_surname();
		string	get_ID();
		void	set_name(string set);
		void	set_surname(string set);
		void	set_ID(string set);
		void	write_public();
};

Student::~Student()
{
	cout << "FİNİSH" << endl;
}

Student::Student()
{
	cout << "this is normal message" << endl;
	name = "none";
	surname = "none";
	ID = "none";
}

Student::Student(string names, string surnames, string IDs)
{
	cout << "this is normal message" << endl;
	name = names;
	surname = surnames;
	ID = IDs;
}

Student::Student(string names, string surnames)
{
	cout << "this is normal message" << endl;
	name = names;
	surname = surnames;
	ID = "none";
}

Student::Student(const Student &oth)
{
	name = oth.name;
	surname = oth.surname;
	ID = oth.ID;
}

void	Student::set_name(string set)
{
	name = set;
}

void	Student::set_surname(string set)
{
	surname = set;
}

void	Student::set_ID(string set)
{
	ID = set;
}

string	Student::get_name()
{
	return (name);
}

string	Student::get_surname()
{
	return (surname);
}

string	Student::get_ID()
{
	return (ID);
}

void	Student::write_public()
{
	cout << name << " " << surname << endl;
	cout << ID << endl;
}
