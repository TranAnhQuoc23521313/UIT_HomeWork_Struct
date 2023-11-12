#include <iostream>
#include <iomanip>
#include<cmath>
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

void Xuat(DATHUC c)
{
	for (int i = c.n; i >= 0; i--)
	{
		cout << c.a[i] << "x^" << i;
		if (i > 0) cout << "+";
	}
}
long tinh(DATHUC f, int x)
{
	long s = 0;
	for (int i = f.n; i >= 0; i--)
	{
		s = s + f.a[i] * pow(x, i);
	}
	return s;
}
int main()
{
	DATHUC f1;
	Nhap(f1);
	int x;
	cout << "Nhap x0=";
	cin >> x;
	cout << tinh(f1, x);
	return 1;
}

