#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct sophuc 
{
	float Thuc; 
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&); 
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);
SOPHUC ThucAoDuongDau(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So phuc dau tien trong ma tran co phan thuc va ao duong: ";
	Xuat(ThucAoDuongDau(a, m, n));
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
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

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m,
	int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
				return a[i][j];
	return { 0,0 };
}