#include <iostream>

int main()
{
	int gio, phut, giay;
	std::cout << "Nhap gio: "; std::cin >> gio;
	std::cout << "Nhap phut: "; std::cin >> phut;
	std::cout << "Nhap giay: "; std::cin >> giay;

	if ((gio < 0 || gio > 23) || (phut < 0 || phut > 59) || (giay < 0 || giay > 59))
	{
		std::cout << "Ket qua: Khong hop le";
	}
	else
	{
		std::cout << "Ket qua: Hop le ";
	}
}