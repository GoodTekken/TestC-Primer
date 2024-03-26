#include <iostream>
int main_52()
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << "\n";
	cout << "Done now what i = " << i << "\n";
	return 0;
}