#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}
DATHUC tich(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
			temp.a[i + j] += g.a[i] * f.a[j];
	return temp;
}

void Xuat(DATHUC c)
{
	for (int i = c.n; i >= 0; i--)
	{
		cout << c.a[i] << "x^" << i;
		if (i > 0) cout << "+";
	}
}

int main()
{
	DATHUC f1, f2, f3;
	Nhap(f1);
	Nhap(f2);
	f3 = tich(f1, f2);
	Xuat(f3);
	return 1;
}

