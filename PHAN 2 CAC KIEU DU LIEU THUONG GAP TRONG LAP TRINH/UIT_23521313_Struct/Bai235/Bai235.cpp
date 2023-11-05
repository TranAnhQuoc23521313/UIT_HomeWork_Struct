#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][500], int&, int&);

void Xuat(SoPhuc);
void Xuat(SOPHUC[][500], int, int);

int main()
{
	SOPHUC a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[][500], int& m, int& n)
{
	cout << "Nhap M:";
	cin >> m;
	cout << "Nhap N:";
	cin >> n;
	for (int i = 0; i < m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc = " << x.Thuc;
	cout << "\nPhan ao = " << x.Ao;
}

void Xuat(SOPHUC a[][500], int m, int n)
{
	for (int i = 0;i < m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}