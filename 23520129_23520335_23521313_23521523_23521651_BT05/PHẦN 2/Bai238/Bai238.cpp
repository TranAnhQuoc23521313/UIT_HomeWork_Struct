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
void Nhap(SOPHUC x[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]";
			Nhap(x[i][j]);
		}
	}
}
int ktDong(SOPHUC a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			flag = 0;
		return flag;
}
int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
		dem++;
	return dem;
}
int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << DemDong(a, m, n);
	return 0;
}