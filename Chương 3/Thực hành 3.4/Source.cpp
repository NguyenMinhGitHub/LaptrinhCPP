#include <iostream>
#include <cmath>

int main()
{
	int n;

	std::cout << "Nhap n: ";
	std::cin >> n;

	std::cout << "So dao nguoc la: "
		<< n % 10 << (n % 100) / 10 << n / 100;

}