#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][500], int&, int&);
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[][500], int& m, int& n)
{
	cout << "Nhap vao M: ";
	cin >> m;
	cout << "Nhap vao N: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao A[" << i << "][" << j << "]:" << endl;
			Nhap(a[i][j]);
		}
	}
}
void Xuat(PHANSO& a)
{
	cout << "Tu:" << a.Tu;
	cout << "Mau:" << a.Mau;
}
void Xuat(PHANSO a[][500], int m, int n)
{
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				cout << "A[" << i << "][" << j << "]:";
				Xuat(a[i][j]);
				cout << endl;
			}
	}
}
int main()
{
	PHANSO a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}