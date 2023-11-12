#include<iostream>
#include<cmath>
using namespace std;
struct diem
{
	float x, y;
};
typedef struct diem DIEM;

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
void Nhap(DUONGTRON k[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Duong tron a[" << i << "]";
		Nhap(k[i]);
	}
}
void Xuat(DIEM k)
{
	cout << "\nx:" << k.x;
	cout << "\ny:" << k.y;

}
void Xuat(DUONGTRON x)
{
	cout << "\nToa do tam";
	Xuat(x.I);
	cout << "\nR:" << x.R;
}
float KhoangCachGoc(DIEM a) {
	return sqrt(a.x * a.x + a.y * a.y);
}
float KhoangCachGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	return abs(kc - c.R);
}
DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 1; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}
int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	DUONGTRON b = GanGocNhat(a, n);
	Xuat(b);
	return 0;
}