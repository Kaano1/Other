#include <iostream>
#include <string>
using namespace std;

class Person
{
	protected:
		string Name;
		string Surname;
	public:
		Person(string name = "", string surname = "")
		{
			Name = name;
			Surname = surname;
			cout << "Working Person constructor" << endl;
		}
		string	get_person_name() const
		{
			return (Name);
		};
		string	get_person_surname() const
		{
			return (Surname);
		}
		void	set_person_name(string name)
		{
			Name = name;
		}
		void	set_person_surname(string surname)
		{
			Surname = surname;
		}
		void	print()
		{
			cout << "Name: " << Name << endl;
			cout << "Surname: " << Surname << endl;
		}
};

class Student : public Person
{
	private:
		int		studentID;
		int		studentGrade;
		bool	passOrfail;
	public:
		Student();
		Student(string name, string surname, int ID) : Person(name, surname)
		{
			studentID = ID;
			cout << "student constructor worked" << endl;
		}
		int		getStudentID() const
		{
			return (studentID);
		}
		void	setStudentID(int ID)
		{
			studentID = ID;
		}
		int		getStudentGrade() const
		{
			return (studentGrade);
		}
		void	setStudentGrade(int grade)
		{
			studentGrade = grade;
		}
		int		getPassOrFail() const
		{
			return (passOrfail);
		}
		void	setPassOrFail(bool what)
		{
			passOrfail = what;
		}
		void	print()
		{
			Person::print();
			cout << "ID: " << studentID << endl;
			cout << "Grade: " << studentGrade << endl;
		}
};

class Teacher : public Person
{
	private:
		string department;
	public:
		Teacher(string name, string surname, string dep) : Person(name, surname)
		{
			department = dep;
			cout << "Teacher working" << endl;
		}
		string	getDepartment() const
		{
			return (department);
		}
		void	setDepartment(string dep)
		{
			department = dep;
		}
		void	print()
		{
			Person::print();
			cout << "Departmant: " << department << endl;
		}
		void	passFailStatus(Student* studentArray);
		void	printStudentInFormation(Student* studentArray);
};

void	Teacher::passFailStatus(Student* studentArray)
{
	float	average = 0.0;

	for (int i = 0; i < sizeof(studentArray) / 3; i++)
	{
		average += studentArray[i].getStudentGrade();
		printf("n");
	}
	average = (float) average / sizeof(studentArray);
	cout << "Class average: " << average << endl;
	cout << "------------------------------------" << endl;
	for (int i = 0; i < sizeof(studentArray); i++)
	{
		if (studentArray[i].getStudentGrade() >= average)
			studentArray[i].setPassOrFail(true);
		else
			studentArray[i].setPassOrFail(false);
	}
}

void	Teacher::printStudentInFormation(Student* studentArray)
{
	for (int i = 0; i < sizeof(studentArray) / 2; i++)
	{
		studentArray[i].print();
		if (studentArray[i].getPassOrFail() == true)
			cout << "--PASS--" << endl;
		else
			cout << "--FAIL--" << endl;
	}
}
