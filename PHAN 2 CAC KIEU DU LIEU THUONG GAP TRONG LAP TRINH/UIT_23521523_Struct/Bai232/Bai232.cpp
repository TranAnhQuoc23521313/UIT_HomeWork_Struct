#include <iostream>
#include <iomanip>

using namespace std;

struct phanso
{
	int TU, MAU;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO& d)
{
	cout << "Nhap tu: ";
	cin >> d.TU;
	cout << "Nhap mau: ";
	cin >> d.MAU;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]" << endl;
			Nhap(a[i][j]);
		}
	}
}
void hoanvi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;

}
int sosanh(PHANSO a, PHANSO b)
{
	if (a.TU / a.MAU > b.TU / b.MAU) return 1;
	return 0;
}
void saptang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m*n-2; i++)
	{
		for (int j = i+1; j <= m*n-1; j++)
		{
			if (sosanh(a[i / n][i % n], a[j / n][j % n]) == 1)
				hoanvi(a[i / n][i % n], a[j / n][j % n]);
		}
	}
}
void Xuat(PHANSO k)
{
	cout << k.TU << "/" << k.MAU << " ";
}
void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Xuat(a[i][j]);
		}
		cout << endl;
	}
}
int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	saptang(a, m, n);
	Xuat(a, m, n);
	return 0;
}

