#include<iostream>
using namespace std;

struct duongthang
{
	float a, b, c;
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

int kt(DUONGTHANG d1,DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return  1;
	return 0;
}

int main()
{
	DUONGTHANG a,b;
	Nhap(a);
	Nhap(b);
	if (kt(a,b) == 1) cout << "song song";
	else cout << "khong song song";
	return 0;
}