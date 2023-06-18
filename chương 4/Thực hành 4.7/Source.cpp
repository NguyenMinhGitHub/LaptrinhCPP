#include <iostream>

int main()
{
	float x, y, z;
	std::cout << "Nhap x: "; std::cin >> x;
	std::cout << "Nhap y: "; std::cin >> y;
	std::cout << "Nhap z: "; std::cin >> z;
	
	{
		if ((x > y) && (x > z))
		{
			std::cout << "Ket qua 1: So lon nhat la " << x << "\n";
		}
		else if ((x < y) && (y > z))
		{
			std::cout << "Ket qua 1: So lon nhat la " << y << "\n";
		}
		else
			std::cout << "Ket qua 1: So lon nhat la " << z << "\n";
	}

	{
		if ((x < y) && (x < z))
		{
			std::cout << "Ket qua 2: So be nhat la " << x << "\n";
		}
		else if ((x > y) && (y < z))
		{
			std::cout << "Ket qua 2: So be nhat la " << y << "\n";
		}
		else
			std::cout << "Ket qua 2: So be nhat la " << z << "\n";
	}

	{
		if (((x > 0) && (y > 0) && (z > 0)) || ((x < 0) && (y < 0) && (z < 0)))
			std::cout << "Ket qua 3: Ca 3 so cung dau " << "\n";
		else 
			std::cout << "Ket qua 3: Ca 3 so khac dau nhau " << "\n";
	}

	{
		if ((x > 0) && (y > 0) && (z < 0))
		{
			std::cout << "Ket qua 4: " << "( " << x << "," << z << " ), ";
			std::cout << "( " << y << "," << z << " )" << "\n";
		}
		else if ((x > 0) && (y < 0) && (z > 0))
		{
			std::cout << "Ket qua 4: " << "( " << x << "," << y << " ), ";
			std::cout << "( " << y << "," << z << " )" << "\n";
		}
		else if ((x < 0) && (y > 0) && (z > 0))
		{
			std::cout << "Ket qua 4: " << "( " << x << "," << y << " ), ";
			std::cout << "( " << x << "," << z << " )" << "\n";
		}
		else
			std::cout << "Ket qua 4: " << "ko co cap so nao trai dau " << "\n";
	}
}