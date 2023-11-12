#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

float KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON a[], int);

void Xuat(DIEM);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON a[500];
	int n;
	Nhap(a, n);
	DUONGTRON min = GanOxNhat(a, n);
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

void Nhap(DUONGTRON& C)
{
	cout << "Nhap tam:" << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}

float KhoangCachOx(DUONGTRON C)
{
	if (abs(C.I.y) < C.R)
		return 0;
	return abs(abs(C.I.y) - C.R);
}

DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}

void Xuat(DUONGTRON C)
{
	cout << "Tam: " << endl;
	Xuat(C.I);
	cout << "\nBan kinh: " << C.R;
}

void Xuat(DIEM P)
{
	cout << setw(8) << "x = " << P.x << endl;
	cout << setw(8) << "y = " << P.y;
}