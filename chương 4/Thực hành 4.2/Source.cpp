#include <iostream>

int main()
{
	int thang;
	std::cout << "Nhap thang: ";
	std::cin >> thang;

	if (thang < 1 || thang > 12)
	{
		std::cout << "Thang khong hop le ";
	}
	switch (thang) 
	{
	case 1: std::cout << "thang 1 thuoc quy x va co xx ngay "; break;
	case 2: std::cout << "thang 2 thuoc quy x va co xx ngay "; break;
	case 3: std::cout << "thang 3 thuoc quy x va co xx ngay "; break;
	case 4: std::cout << "thang 4 thuoc quy x va co xx ngay "; break;
	case 5: std::cout << "thang 5 thuoc quy x va co xx ngay "; break;
	case 6: std::cout << "thang 6 thuoc quy x va co xx ngay "; break;
	case 7: std::cout << "thang 7 thuoc quy x va co xx ngay "; break;
	case 8: std::cout << "thang 8 thuoc quy x va co xx ngay "; break;
	case 9: std::cout << "thang 9 thuoc quy x va co xx ngay "; break;
	case 10: std::cout << "thang 10 thuoc quy x va co xx ngay "; break;
	case 11: std::cout << "thang 11 thuoc quy x va co xx ngay "; break;
	case 12: std::cout << "thang 12 thuoc quy x va co xx ngay ";
	}
}