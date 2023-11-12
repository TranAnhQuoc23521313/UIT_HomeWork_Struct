#include<iostream>
using namespace std;
struct DuongThang
{
	float a, b, c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG& x)
{
	cout << "Nhap a:";
	cin >> x.a;
	cout << "Nhap b:";
	cin >> x.b;
	cout << "Nhap c:";
	cin >> x.c;
}
void Xuat(DUONGTHANG x)
{
	cout << "Duong thang vua nhap la:";
	cout <<"\na:"<< x.a;
	cout << "\nb:" << x.b;
	cout << "\nc:" << x.c;
}
int main()
{
	DUONGTHANG x;
	Nhap(x);
	Xuat(x);
	return 0;
}