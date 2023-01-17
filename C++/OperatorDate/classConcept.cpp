#include "Data.hpp"

int	main(void)
{
	Data	ali_baba(2, 12, 2023);
	Data	serif_izgoren(3, 2, 2002);
	Data	nene_hatun(ali_baba);

	for (int i = 0; i < 30; i++)
	{
		ali_baba++;
		cout << ali_baba;
	}
	nene_hatun > ali_baba;
	ali_baba > serif_izgoren;
}