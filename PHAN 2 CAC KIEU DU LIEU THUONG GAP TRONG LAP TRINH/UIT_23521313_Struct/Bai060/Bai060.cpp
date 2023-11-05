#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO operator-(PHANSO, PHANSO);
void Xuat(PHANSO);
void RutGon(PHANSO&);
int UCLN(int, int);

int main()
{
	PHANSO x, y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(x);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(y);
	PHANSO Minus = x - y;
	cout << "X - Y = ";
	Xuat(Minus);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
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

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}