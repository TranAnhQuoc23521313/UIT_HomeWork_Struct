
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
float khoangcach(DIEM I1, DIEM I2)
{
	return sqrt((I1.x - I2.x) * (I1.x - I2.x) + (I1.y - I2.y) * (I1.y - I2.y));
}
int TuongDoi(DUONGTRON a, DUONGTRON b)
{
	float kc = khoangcach(a.I, b.I);
	if (kc == 0 && a.R == b.R) return 0;
	if (kc > (a.R + b.R)) return 1;
	if (kc<(a.R + b.R) && kc>abs(a.R - b.R)) return 3;
	if (kc == a.R + b.R) return 2;
	if (kc == abs(a.R - b.R)) return 4;
	return 5;
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
void LietKe(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		if (TuongDoi(a[i], a[j]) == 2 ||
			TuongDoi(a[i], a[j]) == 4)
		{
			Xuat(a[i]);
			Xuat(a[j]);
		}
}
int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}