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
void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.MAU * y.MAU;
	x.TU = x.TU * y.MAU;
	y.TU = y.TU * x.MAU;
	x.MAU = tc;
	y.MAU = tc;
}

void Xuat(PHANSO k)
{
	cout << k.TU << "/" << k.MAU;
}
int main()
{
	PHANSO a,b;
	cout << "Nhap phan so A:";
	Nhap(a);
	cout << "Nhap phan so B:";
	Nhap(b);
	QuiDongTu(a, b);
	cout << "A: ";
	Xuat(a);
	cout << "\nB: ";
	Xuat(b);
	return 0;
}