#include <iostream>
int main_416()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higggens = " << higgens << ";Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt << ";Value of pt = " << pt << endl;
	return 0;
}