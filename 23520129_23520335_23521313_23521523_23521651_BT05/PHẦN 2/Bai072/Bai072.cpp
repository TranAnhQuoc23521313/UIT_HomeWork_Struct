#include<iostream>
#include<cmath>
using namespace std;
struct HonSo
{
	int Nguyen, Tu, Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO& k)
{
	cout << "\nNhap nguyen:";
	cin >> k.Nguyen;
	cout << "Nhap tu:";
	cin >> k.Tu;
	cout << "Nhap mau:";
	cin >> k.Mau;
}

int main()
{
	HONSO a;
	cout << "Nhap hon so:";
	Nhap(a);
	return 0;
}