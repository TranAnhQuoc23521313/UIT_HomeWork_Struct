#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;
int UCLN(int x, int y)
{
	int a = x;
	int b = y;
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

int KtToiGian(PHANSO x)
{
	int kq = UCLN(x.Tu, x.Mau);
	if (kq == 1)
		return 1;
	return 0;
}
void hoanvi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;

}
int sosanh(PHANSO a, PHANSO b)
{
	if (a.Tu / a.Mau > b.Tu / b.Mau) return 1;
	return 0;
}
void saptang(PHANSO a[],int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sosanh(a[i], a[j]) == -1)
				hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
	cout << "\n Tu = " << x.Tu;
	cout << "\n Mau = " << x.Mau;
}
void Xuat(PHANSO x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(x[i]);
	}
}
void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[1000];
	int k = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (KtToiGian(a[i][j]))
					b[k++] = a[i][j];
		   saptang(b,k);
		   Xuat(b, k);
}
int main()
{
	PHANSO a[100][100];
	int m, n;
	cin >> m >> n;
	LietKe(a, m, n);
	return 0;
}