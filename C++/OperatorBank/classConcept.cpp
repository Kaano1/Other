#include "Bank.hpp"

int	main(void)
{
	Bank	network("ahmet", "kaan", 20, "05414218177");
	Bank	network2(network);

	cout << endl;
	cout << network;
	cout << endl;
	network+12;
	network-21;
	cout << network;
	cout << endl;
}