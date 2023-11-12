#include <iostream>
using namespace std;
struct phanso
{
	int Tu, Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO& a)
{
	cout << "\nNhap tu:";
	cin >> a.Tu;
	cout << "Nhap mau:";
	cin >> a.Mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]";
		Nhap(a[i]);
	}
}
bool ktDuong(PHANSO k)
{
	if (k.Tu <= 0 || k.Mau <= 0) return false;
	return true;
}
int SoSanh(PHANSO a, PHANSO b) {
	if (a.Tu * b.Mau < b.Tu * a.Mau) {
		return -1;
	}
	else if (a.Tu * b.Mau > b.Tu * a.Mau) {
		return 1;
	}
	else {
		return 0;
	}
}
PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == 1)
		lc = a[n - 1];
	return lc;
}
void Xuat(PHANSO& a)
{
	cout << "Tu:" << a.Tu;
	cout << "Mau:" << a.Mau;
}
void Xuat(PHANSO a[], int n)
{
	PHANSO b = DuongNhoNhat(a, n);
	cout << b.Tu << "/" << b.Mau;
}
int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	DuongNhoNhat(a, n);
	Xuat(a, n);
	return 0;
}