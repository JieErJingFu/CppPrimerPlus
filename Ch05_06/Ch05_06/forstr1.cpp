#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	for (int i = word.size(); i >= 0 ; i--)
	{
		cout << (int)word[i] << endl;
	}
	cout << "\nBye.\n";
	return 0;
}