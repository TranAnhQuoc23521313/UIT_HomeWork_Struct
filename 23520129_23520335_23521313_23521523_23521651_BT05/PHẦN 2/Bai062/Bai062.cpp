#include<iostream>
#include<cmath>
using namespace std;
struct PhanSo
{
	int TU, MAU;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO& k)
{
	cout << "\nNhap tu:";
	cin >> k.TU;
	cout << "Nhap mau:";
	cin >> k.MAU;
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
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.TU, x.MAU);
	x.TU = x.TU / kq;
	x.MAU = x.MAU / kq;
}
PHANSO operator/ (PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.TU = x.TU * y.MAU;
	temp.MAU = x.MAU * y.TU;
	RutGon(temp);
	return temp;
}
int main()
{
	PHANSO a, b,c;
	cout << "Nhap phan so A:";
	Nhap(a);
	cout << "Nhap phan so B:";
	Nhap(b);
	return 0;
}