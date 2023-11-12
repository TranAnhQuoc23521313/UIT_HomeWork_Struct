#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}
void Nhap(SOPHUC x[][100],int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]["<<j<<"]";
			Nhap(x[i][j]);
		}
	}
}
void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}
void Xuat(SOPHUC x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(x[i]);
	}
}

SOPHUC thucaoamcuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0) return a[i][j];
		}
	}
	return { 0,0 };
}
int main()
{
	SOPHUC M[100][100],z;
	int m,n;
	Nhap(M,m,n);
	z = thucaoamcuoi(M, m, n);
	Xuat(z);
	return 1;
}

