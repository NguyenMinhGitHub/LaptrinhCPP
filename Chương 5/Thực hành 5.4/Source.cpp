#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;

	int UC = 1;
	int BC = (a * b);
	//tìm ước
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			UC = i;
		}
	}
	//Tìm bội
	int max = (a > b) ? a : b;
	for (int i = max; i <= (a * b); i += max) {
		if (i % a == 0 && i % b == 0) {
			BC = i;
			break;
		}
	}
	cout << "Uoc chung lon nhat la: " << UC;
	cout << "\nBoi chung lon nhat cua la: " << BC;
}