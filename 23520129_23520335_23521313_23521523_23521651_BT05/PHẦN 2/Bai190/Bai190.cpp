#include <iostream>
#include <iomanip>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void HoanVi(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);
void SapXep(PHANSO[], int);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);

int main()
{
	PHANSO a[500];
	int n;
	Nhap(a, n);
	cout << "Mang A truoc khi sap xep: \n";
	Xuat(a, n);
	SapXep(a, n);
	cout << "\nMang A sau khi sap xep tang dan: \n";
	Xuat(a, n);
	return 0;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	return 0;
}

void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << setw(4);
	}
}

void SapXep(PHANSO a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]) == 1)
				HoanVi(a[i], a[j]);
}