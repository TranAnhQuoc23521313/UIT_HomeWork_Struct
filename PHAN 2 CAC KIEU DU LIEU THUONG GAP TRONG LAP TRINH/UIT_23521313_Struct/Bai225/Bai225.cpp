#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);
void Nhap(DUONGTHANG&);

float KhoangCach(DUONGTHANG, DIEM);

DIEM ThuocD(DIEM[], DUONGTHANG, int);

void XoaTrung(DIEM[], int&, int);

void Xuat(DIEM);

int main()
{
	DIEM a[500];
	DUONGTHANG d;
	int n;
	cout << "Nhap duong thang d: \n";
	Nhap(d);
	Nhap(a, n);
	cout << "Toa do cua diem gan duong thang d nhat: " << endl;
	DIEM min = ThuocD(a, d, n);
	Xuat(min);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
	{
//		cout << d.a * P.x + d.b * P.y + d.c << endl;
		return 0;
	}
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

DIEM ThuocD(DIEM a[], DUONGTHANG d, int n)
{
	int temp = n;
	for (int i = 0; i < temp; i++)
		if (KhoangCach(d, a[i]) == 0)
			XoaTrung(a, n, i);
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(d, a[i]) != 0 && KhoangCach(d, a[i]) < KhoangCach(d, lc))
				lc = a[i];
	return lc;
}

void Xuat(DIEM P)
{
	cout << "X = " << P.x << endl;
	cout << "Y = " << P.y;
}

void XoaTrung(DIEM a[], int& n,int c)
{
	for (int i = c; i < n-1; i++)
		a[i] = a[i + 1];
	n--;
}