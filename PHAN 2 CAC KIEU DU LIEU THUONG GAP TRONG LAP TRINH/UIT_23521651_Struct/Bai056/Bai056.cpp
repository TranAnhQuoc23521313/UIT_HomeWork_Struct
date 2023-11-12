#include<iostream>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&, int);
void QuiDongMau(PHANSO&, PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO A, B;
	Nhap(A, 1);
	Nhap(B, 2);
	QuiDongMau(A, B);
	cout << endl << "Phan so thu nhat sau khi qui dong: ";
	Xuat(A);
	cout << endl << "Phan so thu hai sau khi qui dong: ";
	Xuat(B);
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

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}