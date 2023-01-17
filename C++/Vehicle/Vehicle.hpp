#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
	private:
		int		speed;
		int		gearNumber;
		bool	is_working;
		double	price;
		string	brand;
	public:
		Vehicle(string brand, double V_price)
		{
			is_working = false;
			speed = 0;
			gearNumber = 0;
			price = V_price;
			this->brand = brand;
			cout << "Vehicle constructor working" << endl;
		}
		bool	getIsWork() const {return (is_working);};
		int		getSpeed() const {return (speed);};
		int		getGearNumber() const {return (gearNumber);};
		double	getPrice() const {return (price);};
		string	getBrand() const {return (brand);};
		
		void	setIsWork(bool is) {is_working = is;};
		void	setSpeed(int sp) {speed = sp;};
		void	setGearNumber(int gear) {gearNumber = gear;};
		void	setPrice(double pricess) {price = pricess;};
		void	setBrand(string brd) {brand = brd;};
		void	startEngine()
		{
			is_working = true;
			gearNumber = 1;
		}
		void	stopEngine()
		{
			is_working = false;
			gearNumber = 0;
			speed = 0;
		}
		virtual void display()
		{
			cout << "Brand: " << brand << endl;
			cout << "Price: " << price << endl;
			cout << "Speed: " << speed << endl;
			cout << "Gear:  " << gearNumber << endl;
			is_working ? cout << "Engine on" << endl : cout << "Engine off" << endl;
		}
		virtual void	increaseSpeed() = 0;
		virtual void	decreaseSpeed() = 0;
};

class Car : public Vehicle
{
public:
	Car(string brand, double C_price) : Vehicle(brand, C_price) {cout << "Car constructor worked" << endl;};
	void	increaseSpeed()
	{
		if (getIsWork())
		{
			int	speedIt = getSpeed();
			if (speedIt <= 120)
			{
				int	gearTmp = getGearNumber();
				setSpeed(speedIt + 30);
				if (gearTmp < 6)
					setGearNumber(gearTmp + 1);
			}
		}
		else
			cout << "You should start the Engine" << endl;
	}

	void	decreaseSpeed()
	{
		if (getIsWork())
		{
			int	speedIt = getSpeed();
			if (speedIt >= 30)
			{
				int	gearTmp = getGearNumber();
				setSpeed(speedIt - 30);
				if (gearTmp >= 2)
					setGearNumber(gearTmp - 1);
			}
		}
		else
			cout << "You should start the Engine" << endl;
	}
	void	display()
	{
		cout << "--------------------------------Car Information-----------------------------" << endl;
		Vehicle::display();
	}
};

class Motor : public Vehicle
{
	public:
		Motor(string brand, double C_price) : Vehicle(brand, C_price) {cout << "Motor constructor worked" << endl;};
		void	increaseSpeed()
		{
			if (getIsWork())
			{
				int	speedIt = getSpeed();
				if (speedIt <= 90)
				{
					int	gearTmp = getGearNumber();
					setSpeed(speedIt + 20);
					if (gearTmp < 6)
						setGearNumber(gearTmp + 1);
				}
			}
			else
				cout << "You should start the Engine" << endl;
		}

		void	decreaseSpeed()
		{
			if (getIsWork())
			{
				int	speedIt = getSpeed();
				if (speedIt >= 20)
				{
					int	gearTmp = getGearNumber();
					setSpeed(speedIt - 20);
					if (gearTmp >= 2)
						setGearNumber(gearTmp - 1);
				}
			}
			else
				cout << "You should start the Engine" << endl;
		}
		void	display()
		{
			cout << "--------------------------------Motor Information-----------------------------" << endl;
			Vehicle::display();
		}
};
