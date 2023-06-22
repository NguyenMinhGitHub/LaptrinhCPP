#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cout << "Nhap n: "; cin >> n;
	float tong = 0;
	for (int i = 1; i <= n; i++) {
		if (n >= 5) {
			tong += 2 * pow(i, 2) + 5 * i + 9;
		}
		else 
			tong += -2 * pow(i, 2) + 4 * i - 9;
	}
	cout << "Ket qua: " << tong;
}