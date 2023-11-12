#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC LuyThua(SOPHUC, int);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main()
{
	SOPHUC x;
	int n;
	cout << "Nhap vao so phuc X: " << endl;
	Nhap(x);
	cout << "Nhap vao mu N: " << endl;
	cin >> n;
	cout << "X^N: \n";
	SOPHUC Exponentiation = LuyThua(x, n);
	Xuat(Exponentiation);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
//	cout << x.Thuc << " + " << x.Ao << "i";
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC T = { 1,0 };
	for (int i = 1; i <= n; i++)
		T = Tich(T, x);
	return T;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}