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
void Xuat(HONSO);
void RutGon(HONSO&);
HONSO Hieu(HONSO, HONSO);
int UCLN(int, int);

int main()
{
	HONSO A, B;
	Nhap(A, 1);
	Nhap(B, 2);
	cout << endl << "Hieu hai hon so la: ";
	Xuat(Hieu(A, B));
}

void Nhap(HONSO& x, int a)
{
	cout << "Nhap nguyen hon so "<< a << ": ";
	cin >> x.Nguyen;
	cout << "Nhap tu hon so " << a << ": ";
	cin >> x.Tu;
	cout << "Nhap mau hon so " << a << ": ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}
void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}