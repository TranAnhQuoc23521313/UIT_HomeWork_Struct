#include <iostream>
using namespace std;
struct phanso
{
	int TU, MAU;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO& a)
{
	cout << "\nNhap tu:";
	cin >> a.TU;
	cout << "Nhap mau:";
	cin >> a.MAU;
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
void Xuat(PHANSO& a)
{
	cout << "Tu:" << a.TU;
	cout << "Mau:" << a.MAU;
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}