#include<iostream>
#include<cmath>
using namespace std;
struct diem
{
	float x,y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a, b, c;
};
typedef struct duongthang DUONGTHANG;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM& k)
{
	cout << "\nNhap x:";
	cin >> k.x;
	cout << "Nhap y:";
	cin >> k.y;
}
void Nhap(DUONGTRON& k)
{
	cout << "\nNhap tam:";
	Nhap(k.I);
	cout << "Nhap ban kinh:";
	cin >> k.R;
}
float chuvi(DUONGTRON k)
{
	return float(2 * 3.14 * k.R);
}

int main()
{
	DUONGTRON a;
	Nhap(a);
	cout << chuvi(a);
	return 0;
}