#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Person
{
	protected:
		string	person_name;
		string	person_surname;
		string	person_department;
		string	person_position;
		string	person_ID;
		int		psalary;
		int		pyear;
	public:
		Person(string name, string surname, string department, string position, int salary, int year)
		{
			person_name = name;
			person_surname = surname;
			person_department = department;
			person_position = position;
			psalary = salary;
			pyear = year;
		}
		void	setName(string name) {person_name = name;};
		void	setSurName(string surname) {person_surname = surname;};
		void	setDepartment(string department) {person_department = department;};
		void	setPosition(string position) {person_position = position;};
		void	setID(string ID) {person_ID = ID;};
		void	setSalary(int salary) {psalary = salary;;};
		void	setYear(int year) {pyear = year;};
		
		string	getName() {return (person_name);};
		string	getSurName() {return (person_surname);};
		string	getDepartment() {return (person_department);};
		string	getPosition() {return (person_position);};
		string	getID() {return (person_ID);};
		int		getSalary() {return (psalary);};
		int		getYear() {return (pyear);};
		void	print()
		{
			cout << "---------------" << endl;
			cout << "Name: " << person_name << " " << person_surname << endl;
			cout << "Department: " << person_department << endl;
			cout << "Position: " << person_position << endl;
			cout << "Years Worked: " << pyear << endl;
			cout << "ID Number: " << person_ID << endl;
			cout << "----------------" << endl;
		}
};

class Employe : public Person
{
	private:
		int	employeBonus;
	public:
		Employe(string name, string surname, string department, string position, int salary, int year) : Person(name, surname, department, position, salary, year)
		{
			int	random;

			random = rand() % 8999 + 1000;
			employeBonus = year * 12;
			Employe::setID("EM" + to_string(random));
		}
		void	print()
		{
			Person::print();
			cout << "Bonus: " << employeBonus << endl;
		}
};

class Manage : public Employe
{
private:
	int	manageBonus;
public:
	Manage(string name, string surname, string department, string position, int salary, int year) : Employe(name, surname, department, position, salary, year)
	{
		int	random;

		random = rand() % 8999 + 1000;
		manageBonus = year * 28;
		Employe::setID("MN" + to_string(random));
		cout << "Manage started" << endl;
	}
	void	print()
	{
		Person::print();
		cout << "Bonus: " << manageBonus << endl;
		cout << "------------" << endl;
	}
	void	extractEmployes(Employe empArray[])
	{
		cout << "Manager Name: " << person_name << " " << person_surname << endl;
		cout << "Manager ID: " << getID() << endl;
		for (int i = 0; i < sizeof(empArray) / 2; i++)
		{
			if (getDepartment() == empArray[i].getDepartment())
			{
				empArray[i].print();
			}
		}
	}
};