#include <iostream>
using namespace std;
int main()
{
	int a[7] = { 8,4,3,7,1,23,900 };
	int c = sizeof(a) / sizeof(a[0]) - 1, m;
	for (1; c > 0; c--)
	{
		for (int d = 0; d < c; d++)
		{
			m = a[d];
			if (m > a[d + 1])
				a[d] = a[d + 1], a[d + 1] = m;
		}
	}
	cout << a[0] << '\n' << endl;
	cout << a[1] << '\n' << endl;
	cout << a[2] << '\n' << endl;
	cout << a[3] << '\n' << endl;
	cout << a[4] << '\n' << endl;
	cout << a[5] << '\n' << endl;
	cout << a[6] << '\n' << endl;
}