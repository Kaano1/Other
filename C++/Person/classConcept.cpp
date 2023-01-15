#include "Person.hpp"

int	main(void)
{
	Student one("Ahmet Kaan", "Yumuşakdiken", 21796);
	one.setStudentGrade(42);
	Student two("Mehmet", "Yumuşakdiken", 1246);
	two.setStudentGrade(2);
	Student three("Can", "Yildirim", 427);
	three.setStudentGrade(86);
	Student list[] = {one, two, three};
	Teacher teach("Ahmet", "Kaan", "SoftWare");

	teach.passFailStatus(list);
	teach.printStudentInFormation(list);
}