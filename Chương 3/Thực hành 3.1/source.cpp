#include <iostream>
#include <string>

int main()
{
	float x ,y ;

	std::cout << "Nhap gia tri lan luot cua x,y";
		std::cin >> x >> y;

		std::cout << "Ket qua 1 :"
			<< x * y + (x / y) << ".\n";
		std::cout << "ket qua 2 :"
			<< x + (1 / (x + 1 / ( x + 1 / (x + y)))) << ".\n";
		std::cout << "Ket qua 3 :"
			<< sqrt(pow(3 * x + 2 * y, 2) * pow(5 * x + 1, 3));

}