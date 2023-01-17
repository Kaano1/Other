#include "headerTemplate.hpp"

int	main(void)
{
	
	Number<int> a(4);
	Number<int> b(42);
	Number<float> c(4.2);
	Number<float> d(2.1);

	cout << "Integer " << a.getData() << endl;
	cout << "Integer " << b.getData() << endl;
	cout << "Float " << c.getData() << endl;
	cout << "Float " << d.getData() << "\n" << endl;

	cout << "Result(Integer): " << a + b << endl;
	cout << "Result(Float): " << c + d << endl;
	
	
}