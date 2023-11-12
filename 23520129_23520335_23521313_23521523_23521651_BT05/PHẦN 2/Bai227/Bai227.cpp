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
			cout << "Nhap a[" << i << "]["<<j<<"]" << endl;
			Nhap(a[i][j]);
		}
	}
}

int main()
{
	PHANSO a[100][100];
	int m,n;
	Nhap(a,m, n);
	return 0;
}

