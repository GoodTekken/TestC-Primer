#include <iostream>
const int ArSize = 8;
int sum_arr_3(const int* begin, const int* end);
int main_78()
{
	using namespace std;
	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64,128 };
	int sum = sum_arr_3(cookies, cookies + ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr_3(cookies, cookies + 3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr_3(cookies + 4, cookies + 8);
	cout << "Last four eaters ate " << sum << " cookies.\n";
	return 0;
}

int sum_arr_3(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
	{
		total = total + *pt;
	}
	return total;
}