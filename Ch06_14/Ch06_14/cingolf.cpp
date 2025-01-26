#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	int golf[Max];
	cout << "Please enter your golf score.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number for round #" << i +1 << ": ";
		}
	}

	double total = 0.0;
	for (i = 0; i < Max; i++)
	{
		total += golf[i];
	}
	cout << total / Max << " = averagge score "
		<< Max << " rounds\n";
	return 0;
}