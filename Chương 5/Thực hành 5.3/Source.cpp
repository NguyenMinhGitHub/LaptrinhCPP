#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: "; cin >> n;
	cout << "Ket qua 1: ";
	int dem = 0;
	bool check = false;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
			dem++;
		}
	}
	cout << "\nKet qua 2: " << dem;
	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			check = true;
			break;
		}
		else {
			check = false;
		}
	}
		cout << "\nKet qua 3: " << (check ? "Khong la so nguyen to" : "La so nguyen to");

}
	