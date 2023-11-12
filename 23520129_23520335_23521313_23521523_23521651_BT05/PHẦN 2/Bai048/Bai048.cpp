#include <iostream>
#include <iomanip>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
PHANSO a, b;
void Nhap(PHANSO& x, PHANSO& y)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
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
void RutGon(PHANSO& x)
{
	int kq1 = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq1;
	x.Mau = x.Mau / kq1;
}
PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
void Xuat(PHANSO x, PHANSO y)
{
	cout << "Tong cua hai phan so la: ";
	PHANSO SUM = Tong(x, y);
	cout << SUM.Tu << "/" << SUM.Mau;
}
int main()
{
	Nhap(a, b);
	Xuat(a, b);
	return 0;
}
