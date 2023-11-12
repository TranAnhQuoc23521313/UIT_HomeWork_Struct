#include<iostream>
#include<cmath>
using namespace std;
struct diem
{
	float x, y;
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
float khoangcach(DIEM I1, DIEM I2)
{
	return sqrt((I1.x - I2.x) * (I1.x - I2.x) + (I1.y - I2.y) * (I1.y - I2.y));
}
int tuongdoi(DUONGTRON a, DUONGTRON b)
{
	float kc = khoangcach(a.I, b.I);
	if (kc == 0 && a.R == b.R) return 0;
	if (kc > (a.R + b.R)) return 1;
	if (kc<(a.R + b.R) && kc>abs(a.R - b.R)) return 3;
	if (kc == a.R + b.R) return 2;
	if (kc == abs(a.R - b.R)) return 4;
	return 5;
}

int main()
{
	DUONGTRON a,b;
	Nhap(a);
	Nhap(b);
	int k = tuongdoi(a, b);
	if (k == 0) cout << "2 duong tron trung nhau";
	if (k == 1) cout << "2 duong tron roi nhau";
	if (k == 2) cout << "2 duong tron tiep xuc ngoai";
	if (k == 3) cout << "2 duong tron cat nhau";
	if (k == 4) cout << "2 duong tron tiep xuc trong";
	if (k == 5) cout << "2 duong tron chua trong nhau";
	return 0;
}