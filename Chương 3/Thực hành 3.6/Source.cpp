#include <iostream>

int main()
{
	bool a, b;
	std::cout << "(a) Toi muon chen Ngoc Trinh: ";
	std::cin >> a;
	std::cout << "(b) Toi muon chen Ozawa: ";
	std::cin >> b;

	bool c = (a && b);
	bool d = a || b;
	bool e = a && !b;
	bool f = ((a || b) && !(a && b));

	std::cout << "Bang ket qua: \n"
		<< "(c) " << c << "\n";
	std::cout << "(d) " << d << "\n";
	std::cout << "(e) " << e << "\n";
	std::cout << "(f) " << f;


}