#include <iostream>
int main_415()
{
	using namespace std;
	int updates = 6;
	int* p_updates;

	p_updates = &updates;

	cout << "Value: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}