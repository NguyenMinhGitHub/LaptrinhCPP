#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua 1: ";
	for (int i = 1; i <= n ; i++)
	{
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << "\nKet qua 2: ";
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
	cout << "\nKet qua 3: ";
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0 && i % 3 == 0) {
			cout << i << " ";
		}
	}
	cout << "\nKet qua 4: ";
	for (int i = -n ; i <= n; i++)
	{
		if (i % 5  == 0) {
			cout << i << " ";
		}
	}
}