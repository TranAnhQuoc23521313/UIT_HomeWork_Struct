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
	cout << "\nToa do tam" ;
	Xuat(x.I);
	cout << "\nR:" << x.R;
}
void Xuat(DUONGTRON x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]:";
		Xuat(x[i]);
	}
}

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a,n);
	Xuat(a, n);
	return 0;
}