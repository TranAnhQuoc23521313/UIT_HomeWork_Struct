#include<iostream>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int main()
{
	return 0;
	PHANSO A;
	Nhap(A);
	Xuat(A);
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}