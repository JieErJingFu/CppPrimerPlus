#include <iostream>
int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << hex << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << hex << &cups << endl;

	return 0;
}