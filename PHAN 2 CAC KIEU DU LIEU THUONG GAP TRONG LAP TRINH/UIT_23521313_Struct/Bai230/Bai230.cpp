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

PHANSO NhoNhat(PHANSO[][500], int, int);
int DemNhoNhat(PHANSO[][500], int, int);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "So luong phan so nho nhat trong ma tran: " << DemNhoNhat(a, m, n);
	return 0;
}

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
			cout << "Nhap vao a[" << i << "][" << j << "]:" << endl;
			Nhap(a[i][j]);
		}
	}
}

PHANSO NhoNhat(PHANSO a[][500], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == -1)
				lc = a[i][j];
	return lc;
}

int DemNhoNhat(PHANSO a[][500], int m, int n)
{
	PHANSO lc = NhoNhat(a, m, n);
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 0)
				dem++;
	return dem;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;  // x > y
	if (a < b)
		return -1;	// x < y
	return 0; // x = y
}