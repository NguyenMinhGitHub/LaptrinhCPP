#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;

	if (((a + b > c) && (a + c > b) && (c + b > a)))
	{
		if ((a == b) || (b == c) || (a == c))
		{
			cout << "Ket qua: Tam giac can";
		}
		else if ((a * a + b * b == c * c) || (c * c + a * a == b * b) || (c * c + b * b == a * a))
		{
			cout << "Ket qua: Tam giac vuong";
		}
		else if (a == b == c)
		{
			cout << "Ket qua: Tam giac deu";
		}
		else
			cout << "Ket qua: Tam giac thuong";
	}
	else
		cout << "ket qua: Tam giac nay khong ton tai";
}
	