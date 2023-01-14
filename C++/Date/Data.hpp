#include <iostream>
#include <string>
using namespace std;

class Data
{
	private:
		int	day;
		int	month;
		int	year;
		const int monthDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		const string monthString[12] = {"January", "February", "March", "April", "May", "June", "July", "Auguest", "September", "October", "November", "December"};
	public:
		Data(int d = 1, int m = 1, int y = 1990);
		Data(const Data& oth);
		~Data();
		void	setDate(int d = 1, int m = 1, int y = 1880);
		void	setDay(int d);
		void	setMonth(int m);
		void	setYear(int y);
		int		get_Day() const;
		int		get_Month() const;
		int		get_Year() const;
		void	increaseDay();
		void	compareDate(const Data& othDate);
		void	displayDate();
};

Data::Data(int d, int m, int y)
{
	setDate(d, m, y);
	cout << "Created Data" << endl;
}

Data::Data(const Data& oth)
{
	day = oth.day;
	month = oth.month;
	year = oth.year;
	cout << "Created Copy Data" << endl;
}

Data::~Data()
{
	cout << "Destroyed Data" << endl;
}

void	Data::setDay(int d)
{
	if (d >= 1 && d <= monthDays[month - 1])
		day = d;
}

void	Data::setMonth(int m)
{
	if (m >= 1 && m <= 12)
		month = m;
}

void	Data::setYear(int y)
{
	if (y > 0 && y < 2050)
		year = y;
}

void	Data::setDate(int d, int m, int y)
{
	int	turn;

	turn = 1;
	while (turn)
	{
		setYear(y);
		if (y == year)
		{
			setMonth(m);
			if (m == month)
			{
				setDay(d);
				if (d == day)
					turn = 0;
			}
		}
		if (turn == 1)
		{
			cout << "Try again" << endl;
			cin >> d >> m >> y;
		}
	}
}

int	Data::get_Day() const
{
	return (day);
}

int	Data::get_Month() const
{
	return (month);
}

int	Data::get_Year() const
{
	return (year);
}

void	Data::displayDate()
{
	cout << day << " " << monthString[month - 1] << " " << year << endl;
}

void	Data::increaseDay()
{
	if (day < monthDays[month - 1])
		day++;
	else
	{
		day = 1;
		if (month < 12)
			month++;
		else
		{
			month = 1;
			year++;
		}
	}
}

void	Data::compareDate(const Data& oth)
{
	long	first;
	long	second;

	first = year * 365 + month * 30 + day;
	second = oth.year * 365 + oth.month * 30 + oth.day;
	if (first > second)
	{
		cout << "First data is greater" << endl;
	} 
	else if (second < first)
		cout << "Second data is greater" << endl;
	else
		cout << "Equal" << endl;
}
