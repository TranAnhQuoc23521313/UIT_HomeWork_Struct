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
DATHUC DaoHam(DATHUC);
void Xuat(DATHUC);

int main()
{
	DATHUC f;
	int k;
	cout << "Nhap vao da thuc f(x): " << endl;
	Nhap(f);
	cout << "f(x) = ";
	Xuat(f);
	cout << "\nNhap cap k: ";
	cin >> k;
	cout << "\nf'(" << k << ")(x) = ";
	DATHUC g = DaoHam(f);
	for (int i = 1; i < k; i++);
		g = DaoHam(g);
	Xuat(g);
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

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp;
	temp.n = f.n - 1;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = f.a[i + 1] * (i + 1);
	return temp;
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