#include <iostream>
using namespace std;

int main()
{
	int H1, H2, H3, H4, H5, H6;
	int x1, x2, x3, x4, x5, x6;
	cout << "Nhap lan luot so luong 6 mat hang: "; 
	cin >> H1 >> H2 >> H3 >> H4 >> H5 >> H6;
	x1 = 100; x2 = 150; x3 = 120; x4 = 90; x5 = 130; x6 = 140;
	float $ = H1*x1 + H2*x2 + H3*x3 + H4*x4 + H5*x5 + H6*x6;
	int n = H1 + H2 + H3 + H4 + H5 + H6;

	if ((n >= 4) && (H6 >= 2) && ($ > 500))
	{
		float t6 = $ - (0.2 * $);
		cout << "So tien phai tra: " << t6;
	}
	else if (((n >= 4) && ($ > 500)) || ((H6 >= 2) && ($ > 500)))
	{
		float t5 = $ - (0.15 * $);
		cout << "So tien phai tra: " << t5;
	}
	else if ((n >= 4) && (H6 >= 2))
	{
		float t4 = $ - 40;
		cout << "So tien phai tra: " << t4;
	}
	else if ($ > 500)
	{
		float t3 = $ - (0.1 * $);
		cout << "So tien phai tra: " << t3;
	}
	else if (H6 >= 2)
	{
		float t2 = $ - 30;
		cout << "So tien phai tra: " << t2;
	}
	else if (n >= 4)
	{
		float t1 = $ - 20;
		cout << "So tien phai tra: " << t1;
	}
	else 
		cout << "So tien phai tra: " << $;
}