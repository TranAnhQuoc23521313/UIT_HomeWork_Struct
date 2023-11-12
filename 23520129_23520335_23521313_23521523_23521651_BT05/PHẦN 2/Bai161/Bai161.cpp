#include <iostream>
#include <iomanip>

using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
DATHUC Hieu(DATHUC, DATHUC);
void Xuat(DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC&);

int main()
{
	DATHUC f, g;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f);
	cout << "Nhap vao g(x): " << endl;
	Nhap(g);
	DATHUC h = Hieu(f, g);
	cout << "h(x) = f(x) - g(x) = ";
	Xuat(h);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << f.a[0];
}

int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
}

DATHUC Hieu(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}
	for (int i = f.n; i >= 0; i--)
		temp.a[i] -= f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] -= g.a[i];
	GiamBac(temp);
	return temp;
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}