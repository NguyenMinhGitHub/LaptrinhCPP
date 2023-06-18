#include <iostream>
using namespace std;


int main()
{
	float toan, ly, hoa, van, anh, su, dia;
	cout << "Nhap diem lan luot tung mon: ";
	cin >> toan >> ly >> hoa >> van >> anh >> su >> dia;
	float dtb = (toan + ly + hoa + van + anh + su + dia) / 7;

	if ((dtb >= 0) && (dtb <= 10))
	{
		if ((dtb >= 8) && (toan, ly, hoa, van, anh, su, dia) >= 4)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh gioi";
		}
		else if ((dtb >= 8) && (toan, ly, hoa, van, anh, su, dia) < 4)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh kha";//TH 1
		}
		else if ((dtb >= 6.5) && (dtb < 8) && (toan, ly, hoa, van, anh, su, dia) >= 3)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh kha";
		}
		else if ((dtb >= 6.5) && (dtb < 8) && (toan, ly, hoa, van, anh, su, dia) < 3)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh TB";//TH2
		}
		else if ((dtb >= 4) && (dtb < 6.5) && (toan, ly, hoa, van, anh, su, dia) > 0)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh TB";
		}
		else if ((dtb >= 4) && (dtb < 6.5) && (toan, ly, hoa, van, anh, su, dia) == 0)
		{
			cout << "Diem tong ket: " << dtb
				<< "\n" << "Day la hoc sinh yeu";//TH3
		}
		else 
			cout << "Diem tong ket: " << dtb
			<< "\n" << "Day la hoc sinh yeu";//TH4
	}
	else
		cout << dtb << "\n" << "Diem khong hop le";
}