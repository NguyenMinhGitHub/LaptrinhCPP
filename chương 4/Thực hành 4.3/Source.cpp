#include <iostream>

int main()
{
	int year;
	std::cout << "Nhap nam: ";
	std::cin >> year;

	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		std::cout << "Nam " << year << " la nam nhuan. ";
	}
	else
		std::cout << "Nam " << year << " la nam thuong. ";
}