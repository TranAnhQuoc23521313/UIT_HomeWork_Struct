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
	cout << "Nhap vao da thuc f(x): " << endl;
	Nhap(f);
	cout << "f(x) = ";
	Xuat(f);
	cout << "\nf'(x) = ";
	DATHUC g = DaoHam(f);
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
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ") ";
}