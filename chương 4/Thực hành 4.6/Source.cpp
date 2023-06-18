#include <iostream>

int main()
{
	float x, y;
	std::cout << "Nhap x: "; std::cin >> x;
	std::cout << "Nhap y: "; std::cin >> y;
	std::cout << "Ket qua: \n";
	
	{
		if (x == 0)
		std::cout << "x bang 0\n";
		else 
			std::cout << "x khac 0\n";
	}

	
	{
		if (y == 0)
		std::cout << "y bang 0\n";
		else 
			std::cout << "y khac 0\n";
	}

	{
		if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0)))
			std::cout << "Hai so trai dau";
		else
			std::cout << "Hai so cung dau";
	}
}