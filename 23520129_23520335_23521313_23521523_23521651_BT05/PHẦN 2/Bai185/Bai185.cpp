#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
PHANSO LonNhat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO a[500];
	int n;
	Nhap(a, n);
	PHANSO max = LonNhat(a, n);
	cout << "Phan so lon nhat trong mang la: \n";
	Xuat(max);
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

PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}

void Xuat(PHANSO x)
{
	cout << "Tu = " << x.Tu << endl;
	cout << "Mau = " << x.Mau;
}