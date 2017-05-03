#include <iostream>

using namespace std;

void main()
{
	char mass[] = {'a','b','c','d'};
	for (int i = 0; i < sizeof(mass) / sizeof(mass[0]); i++)
		cout << mass[i] << " ";
	cout << "End of project!" << endl;
}