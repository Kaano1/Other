#include "Bank.hpp"

int	main(void)
{
	Bank	network("ahmet", "kaan", 20, "05414218177");
	Bank	network2(network);

	cout << endl;
	cout << "name: " << network.get_name() << endl;
	cout << "surname: " << network.get_surname() << endl;
	cout << "phone: " << network.get_phone() << endl;
	cout << "balance: " << network.get_balance() << endl;
	cout << endl;
	network.credit(100);
	network.withdraw(1253);
	network.display();
	cout << endl;
}