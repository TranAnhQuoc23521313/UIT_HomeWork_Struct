#include <iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
HONSO Tong(HONSO, HONSO);
void Xuat(HONSO);
void RutGon(HONSO&);
int UCLN(int, int);

int main()
{
	HONSO x, y;
	cout << "Nhap vao hon so X: " << endl;
	Nhap(x);
	cout << "Nhap vao hon so Y: " << endl;
	Nhap(y);
	HONSO Plus = Tong(x, y);
	cout << "X + Y = ";
	Xuat(Plus);
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
//	cout << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")";
	cout << "\nNguyen = " << x.Nguyen;
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

int UCLN(int x, int y)
{
	int a = x;
	int b = y;
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen += x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Tong(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen + y.Nguyen;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}