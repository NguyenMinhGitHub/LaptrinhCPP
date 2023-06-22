#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	int dem = 0;
	int UC = 1;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			UC = i;
			dem += UC;
		}
	}
	if (dem == n) {
		cout << "\nKet qua: La so hoan hao";
	}
	else
		cout << "\nKet qua: Khong la so hoan hao";
	
}