#include <iostream>
using namespace std;
struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;
void Nhap(HONSO& x, HONSO& y)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
	cout << "Nhap nguyen: ";
	cin >> y.Nguyen;
	cout << "Nhap tu: ";
	cin >> y.Tu;
	cout << "Nhap mau: ";
	cin >> y.Mau;
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

void RutGon(HONSO & x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}
HONSO Thuong(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}
void Xuat(HONSO x, HONSO y)
{
	cout << "Thuong cua hai hon so la: ";
	HONSO divide = Thuong(x, y);
	cout << divide.Tu << "/" << divide.Mau;
}
int main()
{
	HONSO x, y;
	Nhap(x,y);
	Xuat(x,y);
}