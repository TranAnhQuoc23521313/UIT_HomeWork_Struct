#include<iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;
int ViTriNhoNhat(PHANSO[], int);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "Vi tri co gia tri nho nhat la: " << ViTriNhoNhat(a, n);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i].Tu/a[i].Mau < a[lc].Tu/a[lc].Mau)
			lc = i;
	return lc;
}

void Xuat(PHANSO x)
{
	cout << "\n Tu: " << x.Tu;
	cout << "\n Mau: " << x.Mau;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}