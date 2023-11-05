#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);
void Xuat(PHANSO);
void RutGon(PHANSO&);
int UCLN(int, int);

int main()
{
	PHANSO X, Y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(X);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(Y);
	cout << "X * Y = ";
	PHANSO Multiplied = Tich(X, Y);
	Xuat(Multiplied);
	return 0;
}

void Nhap(PHANSO& X)
{
	cout << "Nhap Tu: ";
	cin >> X.Tu;
	cout << "Nhap Mau: ";
	cin >> X.Mau;
}

void Xuat(PHANSO X)
{
	cout << X.Tu << "/" << X.Mau;
}

PHANSO Tich(PHANSO X, PHANSO Y)
{
	PHANSO temp;
	temp.Tu = X.Tu * Y.Tu;
	temp.Mau = X.Mau * Y.Mau;
	RutGon(temp);
	return temp;
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

void RutGon(PHANSO& X)
{
	int kq = UCLN(X.Tu, X.Mau);
	X.Tu = X.Tu / kq;
	X.Mau = X.Mau / kq;
}