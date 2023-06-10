#include <iostream>
#include <cmath>

int main()
{
	float xA, yA, xB, yB, xC, yC;

	std::cout << "Nhap diem A: ";
		std::cin >> xA >> yA;
		std::cout << "Nhap diem B: ";
		std::cin >> xB >> yB;
		std::cout << "Nhap diem C: ";
		std::cin >> xC >> yC;

		std::cout << "Ket qua 1: " << sqrt(pow(xB - xA, 2) + pow(yB - yA, 2)) << "\n";
	
	float xI = (xA + xB) / 2;
	float yI = (yA + yB) / 2;
	float x0 = 0, y0 = 0;
	std::cout << "Ket qua 2: " << sqrt(pow(xI - x0, 2) + pow(yI - y0, 2)) << "\n";
		
	float xG = (xA + xB + xC) / 3;
	float yG = (yA + yB + yC) / 3;
	std::cout << "Ket qua 3: " << sqrt(pow(xG - x0, 2) + pow(yG - y0, 2)) << "\n";

	std::cout << "Ket qua 4: "
		<< abs((xB - xA) * (yC - yA) - (xC - xA) * (yB - yA)) / 2 << "\n";
		
	float r = ((sqrt(pow(xB - xA, 2) + pow(yB - yA, 2))) + (sqrt(pow(xC - xB, 2) + pow(yC - yB, 2))) + (sqrt(pow(xC - xA, 2) + pow(yC - yA, 2)))) / 2;
	std::cout << "Ket qua 5: " << 3.14 * pow((abs((xB - xA) * (yC - yA) - (xC - xA) * (yB - yA)) / 2) / r, 2) << "\n";
		
	float alpha = acos((xA * xB + yA * yB) / (sqrt(xA * xA + yA * yA) * sqrt(xB * xB + yB * yB)));
	std::cout << "Ket qua 6: " << alpha * 180 / 3.14;
}