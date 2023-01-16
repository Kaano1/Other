#include "PersonToEmploye.hpp"

int	main(void)
{
	Employe	ahmet("ahmet", "kaan", "yazilim", "junior", 12000, 1);
	Employe	mehmet("mehmet", "yumusakdiken", "burger", "senior", 10000, 2);
	Employe	evra("Evra", "Celik", "yazilim", "junior", 12000, 1);
	Employe kefir("Kefir", "ic", "icecek", "sut", 12, 1);
	Employe empList[] = {ahmet, mehmet, evra, kefir};

	Manage manager1("olips", "ydk", "yazilim", "engineer", 25000, 4);
	manager1.extractEmployes(empList);
}