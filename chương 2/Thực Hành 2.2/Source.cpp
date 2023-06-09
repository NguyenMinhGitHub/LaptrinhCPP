#include <iostream>
#include <string>

int main()
{
	std::string fullname = "Maria Ozawa";
	int yearborn = 19;
	std::string country = "Nhat Ban";
	float height = 0;
	float weight = 0;
	bool got_married = true;
	char xep_loai_tot_nghiep = 'A';
	

	std::cout << "Nhap ho ten:";
	std::getline(std::cin, fullname);

	std::cout << "Nhap nam sinh:";
	std::cin >> yearborn;

	std::cin.ignore();

	std::cout << "Nhap que quan:";
	std::getline(std::cin, country);

	std::cout << "Nhap chieu cao:";
	std::cin >> height;

	std::cout << "Nhap can nang:";
	std::cin >> weight;

	std::cout << "Nhap xep_loai_tot_nghiep:";
	std::cin >> xep_loai_tot_nghiep;


	std::cout << "*****************************\n"
		<< "*******SO YEU LY LICH********\n"
		<< "*****************************\n";
	std::cout << "Ho ten:" << fullname << "\n"
		<< "Nam sinh:" << yearborn << "\n"
		<< "Nhap que quan:" << country << "\n"
		<< "Nhap chieu cao:" << height << "\n"
		<< "Nhap can nang:" << weight << "\n"
		<< "Nhap xep_loai_tot_nghiep:" << xep_loai_tot_nghiep;


}