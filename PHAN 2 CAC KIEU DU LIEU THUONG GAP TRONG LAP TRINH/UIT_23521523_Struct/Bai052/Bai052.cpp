#include<iostream>
#include<cmath>
using namespace std;
struct PhanSo
{
	int TU, MAU;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO& k)
{
	cout << "\nNhap tu:";
	cin >> k.TU;
	cout << "Nhap mau:";
	cin >> k.MAU;
}int ktra(PHANSO k)
{
	if (k.MAU != 0) return 1;
	return 0;
}
int main()
{
	PHANSO a;
	cout << "Nhap phan so:";
	Nhap(a);
	if (ktra(a) == 1) cout << "Phan so co nghia";
	else cout << "Phan so khong co nghia";
	return 0;
}