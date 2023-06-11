#include <iostream>

int main()
{
	float x;
	std::cout << "Nhap so thuc x: ";
	std::cin >> x;

	bool a = (0 <= x) && (x <= 5);
	bool b = (0 <= x) && (x <= 4);
	bool c = (0 <= x) && (x <= 1);
	bool d = ((0 == x) || (x > 5) || (x == -2));

	std::cout << "Ket qua 1: " << a << "\n";
	std::cout << "Ket qua 2: " << b << "\n";
	std::cout << "Ket qua 3: " << c << "\n";
	std::cout << "ket qua 4: " << d;

}