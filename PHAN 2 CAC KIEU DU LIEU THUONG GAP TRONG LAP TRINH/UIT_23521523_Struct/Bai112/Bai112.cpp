#include<iostream>
#include<cmath>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC& k)
{
	cout << "\nNhap he so:";
	cin >> k.a;
	cout << "Nhap so mu:";
	cin >> k.n;
}
DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}
void Xuat(DONTHUC k)
{
	cout << k.a << "x^" << k.n;
}
int main()
{
	DONTHUC a,b,c;
	Nhap(a);
	Nhap(b);
	c = Tich(a, b);
	Xuat(c);

	return 0;
}