#include <iostream>
int main_64()
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"De you wish to continue? <y/n>";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "You were warned�� \a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or n! Apparent you "
		"can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\n";
	return 0;
}