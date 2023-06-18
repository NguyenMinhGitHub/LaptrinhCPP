#include <iostream>

int main()
{
	int km;
	std::cout << "Nhap so km: "; std::cin >> km;

	if ((km >= 2) && (km <= 30))
	{
		std::cout << "So tien phai tra: " << 15000 +( (km-1) * 13000 ) ;
	}
	else if (km >= 30)
	{
		std::cout << "So tien phai tra: " 
			<<  15000 + ( 29 * 13000 ) + (km - 30) * 10000;
	}
}