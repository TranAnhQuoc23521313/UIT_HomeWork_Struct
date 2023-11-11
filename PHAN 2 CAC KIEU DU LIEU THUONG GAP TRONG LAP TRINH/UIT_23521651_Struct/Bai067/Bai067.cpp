#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct sophuc 
{
	float Thuc;
	float Ao;
}; 
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&); 
void Xuat(SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
int main()
{
	SOPHUC A, B;
	cout << "Nhap so phuc 1:";
	Nhap(A);
	cout << "Nhap so phuc 2:";
	Nhap(B);
	SOPHUC kq = Hieu(A, B);
	cout << "\nHieu la: ";
	Xuat(kq);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
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