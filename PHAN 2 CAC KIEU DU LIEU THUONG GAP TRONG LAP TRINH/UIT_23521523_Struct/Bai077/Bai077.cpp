#include<iostream>
#include<cmath>
using namespace std;
struct HonSo
{
	int Nguyen, Tu, Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO& k)
{
	cout << "\nNhap nguyen:";
	cin >> k.Nguyen;
	cout << "Nhap tu:";
	cin >> k.Tu;
	cout << "Nhap mau:";
	cin >> k.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a + b;
}
void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}
HONSO Tich(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}
int main()
{
	HONSO a,b;
	Nhap(a);
	Nhap(b);
	return 0;
}