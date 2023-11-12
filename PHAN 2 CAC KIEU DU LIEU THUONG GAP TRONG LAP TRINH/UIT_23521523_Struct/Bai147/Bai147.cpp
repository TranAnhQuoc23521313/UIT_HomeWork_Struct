#include<iostream>
using namespace std;

struct duongthang
{
	float a,b,c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG& c)
{
	cout << "\nNhap a:";
	cin >> c.a;
	cout << "Nhap b:";
	cin >> c.b;
	cout << "Nhap c:";
	cin >> c.c;
}


int main()
{
	DUONGTHANG a;
	Nhap(a);
	return 0;
}