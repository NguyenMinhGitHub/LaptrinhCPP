#include <iostream>
#include <cmath>

int main()
{
	int x, y;
	
	std::cout << "Nhap so chia x: ";
	std::cin >> x;

	std::cout << "Nhap so bi chia y: ";
	std::cin >> y;

	if (y == 0)
	{
		std::cout << "Phep chia khong hop le \n";
	}
	else if ((x % y) == 0)
	{
		std::cout << x << " Chia het cho " << y << "\n";
	}
	else
	{
		std::cout << x << " Khong chia het cho " << y
			<< ". So du la: " << x % y  << "\n";
	}
}