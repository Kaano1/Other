#include <iostream>
#include <string>
using namespace std;

class Bank
{
	private:
		float	accountBalance;
		string	personName, personSurName, personPhone;
	public:
		Bank(string name, string surname, float balance = 0, string p_number = "");
		Bank(const Bank& oth);
		~Bank();
		bool	controlNameSurname(string NameOrSurname);
		bool	controlPhoneNumber(string p_number);
		void	send_money(Bank& othAccount, float amount);
		void	setName(string name);
		void	setSurname(string surname);
		void	setPNumber(string phone);
		void	set_balance(float balance = 0);
		void	display();
		void	credit(float);
		void	withdraw(float);
		int		get_balance() const
		{
			return (accountBalance);
		}
		string	get_name() const
		{
			return (personName);
		}
		string	get_surname() const
		{
			return (personSurName);
		}
		string	get_phone() const
		{
			return (personPhone);
		}
};

Bank::Bank(string name, string surname, float balance, string p_number)
{
	setName(name);
	setSurname(surname);
	set_balance(balance);
	setPNumber(p_number);
	cout << "Created Bank account" << endl;
}

Bank::Bank(const Bank& oth)
{
	personName = oth.personName;
	personSurName = oth.personSurName;
	personPhone = oth.personPhone;
	accountBalance = oth.accountBalance;
	cout << "Copied Constructor" << endl;
}

Bank::~Bank()
{
	cout << "Destroyed Constructor" << endl;
}

bool	Bank::controlNameSurname(string NameOrSurname)
{
	int	i;

	i = 0;
	while (i < NameOrSurname.length())
	{
		if (!((NameOrSurname.at(i) >= 'A' && NameOrSurname.at(i) <= 'Z') || (NameOrSurname.at(i) >= 'a' && NameOrSurname.at(i) <= 'z')))
			return (false);
		i++;
	}
	return (true);
}

bool	Bank::controlPhoneNumber(string p_number)
{
	int	i;

	i = 0;
	if (p_number.empty())
		return (true);
	if (p_number.length() != 11)
		return false;
	while (i < p_number.length())
	{
		if (!(p_number.at(i) >= '0' && p_number.at(i) <= '9'))
			return (false);
		i++;
	}
	return (true);
}

void	Bank::setName(string name)
{
	while (controlNameSurname(name) != true)
	{
		cout << "please enter a name" << endl;
		cin >> name;
	}
	personName = name;
}

void	Bank::setSurname(string surname)
{
	while (controlNameSurname(surname) != true)
	{
		cout << "please enter a surname" << endl;
		cin >> surname;
	}
	personSurName = surname;
}

void	Bank::setPNumber(string phone)
{
	while (controlPhoneNumber(phone) != true)
	{
		cout << "please enter a phone" << endl;
		cin >> phone;
	}
	personPhone = phone;
}

void	Bank::set_balance(float balance)
{
	if (balance < 5)
		return ;
	accountBalance = balance;
}

void	Bank::credit(float vl)
{
	while (vl < 0)
	{
		cout << "Do not agree this value. Try again" << endl;
		cin >> vl;
	}
	accountBalance += vl;
}

void	Bank::withdraw(float vl)
{
	while (vl < 0 || vl > accountBalance)
	{
		cout << "Do not agree this value. Try again" << endl;
		cin >> vl;
	}
	accountBalance -= vl;
}

void	Bank::display()
{
	cout << "------------------------------" << endl;
	cout << "Name: " << personName << "\n" << "Surname: " << personSurName << endl;
	if (!personPhone.empty())
		cout << "Phone Number: " << personPhone << endl;
	else
		cout << "Phone Number: " << "Nope" << endl;
	cout << "Balance: " << accountBalance << endl;
	cout << "------------------------------" << endl;
}

void	Bank::send_money(Bank& oth, float vl)
{
	while (vl < 0 || vl > accountBalance)
	{
		cout << "Do not agree this value. Try again" << endl;
		cin >> vl;
	}
	accountBalance -= vl;
	oth.accountBalance += vl;
}