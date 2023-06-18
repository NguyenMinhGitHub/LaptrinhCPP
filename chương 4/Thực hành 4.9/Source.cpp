#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;

	if (n == ( sqrt(n) * sqrt(n) ))
	{
		cout << "Ket qua: n la so chinh phuong";
	}
	else
	{
		cout << "Ket qua: n ko phai so chinh phuong";
	}
}