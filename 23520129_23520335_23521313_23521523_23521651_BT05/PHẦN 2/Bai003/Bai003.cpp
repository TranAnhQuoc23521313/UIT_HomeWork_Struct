#include <iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO M;
	Nhap(M);
	cout << "\nPhan so vua nhap:";
	Xuat(M);
	return 1;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu:";
	cin >> x.Tu;
	cout << "Nhap mau:";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}