#include "header.hpp"
//copy constructor yazıcağız
int	main(void)
{
	Student student1;
	Student student2("ahmet", "kaan", "ydk");
	Student student3("ahmet", "mehmet");
	Student student4(student2);

	student1.write_public();
	student2.write_public();
	student3.write_public();
	student4.write_public();
}