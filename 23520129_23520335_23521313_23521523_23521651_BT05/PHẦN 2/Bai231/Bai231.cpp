#include <iostream>
using namespace std;
struct PhanSo 
{ 
	int Tu; 
	int Mau;
}; 
typedef struct PhanSo PHANSO; 

void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);
void Xuat(PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);
int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Phan so am lon nhat trong ma tran la: ";
	Xuat(AmLonNhat(a, m, n));
	return 0;
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

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Tu/a[i][j].Mau < 0)
				if (lc.Tu/lc.Mau == temp.Tu/temp.Mau || a[i][j].Tu/a[i][j].Mau > lc.Tu/lc.Mau)
					lc = a[i][j];
	return lc;
}