#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[][100], int& m,int& n)
{
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" <<j<<"]"<< endl;
			Nhap(a[i][j]);
		}
	}
}
bool kttrung(DIEM k, DIEM P)
{
	if (k.x == P.x && k.y == P.y) return true;
	return false;
}
int tansuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (kttrung(a[i][j], P) == true) dem++;
	}
	return dem;
}
int demkhongtrung(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (tansuat(a,m,n,a[i][j])==1) dem++;
	}
	return dem;
}
int main()
{
	DIEM a[100][100];
	int m, n;
	Nhap(a,m, n);
	cout << demkhongtrung(a, m, n);
	return 0;
}


