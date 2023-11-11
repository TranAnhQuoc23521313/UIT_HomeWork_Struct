#include<iostream>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&, int);
void RutGon(PHANSO&);
int UCLN(int, int);
void Xuat(PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
	PHANSO A, B;
	Nhap(A, 1);
	Nhap(B, 2);
	cout << endl << "Thuong hai phan so: ";
	Xuat(Thuong(A, B));
	return 0;
}

void Nhap(PHANSO& x, int pb)
{
	cout << "Nhap tu phan so " << pb << ": ";
	cin >> x.Tu;
	cout << "Nhap mau phan so " << pb << ": ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
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

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Thuong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;
}