#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC Hieu(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x, y;
	cout << "Nhap vao so phuc X: " << endl;
	Nhap(x);
	cout << "Nhap vao so phuc Y: " << endl;
	Nhap(y);
	SOPHUC Minus = Hieu(x, y);
	cout << "X - Y = ";
	Xuat(Minus);
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

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}