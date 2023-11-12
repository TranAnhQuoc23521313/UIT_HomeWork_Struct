#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;
void Nhap(HONSO&, int);
void Xuat(HONSO, int);
void QuiDongTu(HONSO&, HONSO&);

int main()
{
	HONSO A, B;
	Nhap(A, 1);
	Nhap(B, 2);
	cout << endl << "Hai hon so sau khi qui dong tu la: ";
	QuiDongTu(A, B);
	Xuat(A, 1);
	Xuat(B, 2);
}

void Nhap(HONSO& x, int a)
{
	cout << "Nhap nguyen hon so " << a << ": ";
	cin >> x.Nguyen;
	cout << "Nhap tu hon so " << a << ": ";
	cin >> x.Tu;
	cout << "Nhap mau hon so " << a << ": ";
	cin >> x.Mau;
}

void Xuat(HONSO x, int a)
{
	cout << "\nNguyen hon so " << a << ": " << x.Nguyen;
	cout << "\nTu hon so " << a << ": " << x.Tu;
	cout << "\nMau hon so " << a << ": " << x.Mau << endl;
}

void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}