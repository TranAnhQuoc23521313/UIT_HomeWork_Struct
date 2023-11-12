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
void Xuat(PHANSO k)
{
	cout << k.TU << "/" << k.MAU;
}
int main()
{
	PHANSO a;
	cout << "Nhap phan so:";
	Nhap(a);
	RutGon(a);
	Xuat(a);
	return 0;
}