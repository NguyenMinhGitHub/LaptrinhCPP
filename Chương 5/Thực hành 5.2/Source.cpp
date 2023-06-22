#include <iostream>
using namespace std;

int main()
{
	int n;
	float P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, X = 0;
	cout << "Nhap n tu ban phim (n > 1): "; cin >> n;
	if (n <= 1)
	{
		cout << "P" << "(" << n << ")" << "=0" << "\n";
		cout << "Q" << "(" << n << ")" << "=0" << "\n";
		cout << "R" << "(" << n << ")" << "=0" << "\n";
		cout << "S" << "(" << n << ")" << "=0" << "\n";
		cout << "T" << "(" << n << ")" << "=0" << "\n";
		cout << "U" << "(" << n << ")" << "=0" << "\n";
		cout << "V" << "(" << n << ")" << "=0" << "\n";
		cout << "X" << "(" << n << ")" << "=0" << "\n";
	}
	else
	{
		for (int i = 1; i <= n; i++) {
			P += i;
			Q *= i;
			if (i % 2 != 0) {
				R += i;
			}
			S += pow(i, 3);
			T += (i / pow(i, i));
			U += (i * (i + 1));
			V += ((pow(10, i) - 1) / 9);

			int dem = 0;
			dem += i;
			X += dem;

		}
		cout << "P" << "(" << n << ")" << P << "\n";
		cout << "Q" << "(" << n << ")" << Q << "\n";
		cout << "R" << "(" << n << ")" << R << "\n";
		cout << "S" << "(" << n << ")" << S << "\n";
		cout << "T" << "(" << n << ")" << T << "\n";
		cout << "U" << "(" << n << ")" << U << "\n";
		cout << "V" << "(" << n << ")" << V << "\n";
		cout << "X" << "(" << n << ")" << X << "\n";
	}
}