#include <iostream>

using namespace std;

void main()
{
	cout << "Hello world!" << endl;
	int sum;
	int a = 12, b = 102;
	sum = a + b;
	cout << "Sum is " <<sum << end;

	double var1 = 1001;
	double var2 = var1 / 2;
	cout << "Var2 is division 1001 to 2: " << var2 << endl;

	char mass[] = {'a','b','c','d'};
	for (int i = 0; i < sizeof(mass) / sizeof(mass[0]); i++)
		cout << mass[i] << " ";
}