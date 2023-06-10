#include <iostream>
#include <cmath>

int main()
{
	float r,Pi;
	Pi = 3.14;

	std::cout << "Nhap ban kinh";
	std::cin >> r ;

	std::cout << "Chu vi hinh tron la : " << 2 * Pi * r << "\n";
	std::cout << "Dien tich hinh tron la : " << r * r * Pi;
}