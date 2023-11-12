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
void Nhap(SOPHUC x[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]";
		Nhap(x[i]);
	}
}
SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}
SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i <= n - 1; i++)
		s = Tong(s, a[i]);
	return s;
}
void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}
void Xuat(SOPHUC a[], int n)
{
	SOPHUC b = Tong(a, n);
	cout << b.Thuc << " + " << b.Ao << "i";
}


int main()
{
	SOPHUC M[100];
	int n;
	Nhap(M, n);
	Tong(M, n);
	Xuat(M, n);
	return 1;
}
