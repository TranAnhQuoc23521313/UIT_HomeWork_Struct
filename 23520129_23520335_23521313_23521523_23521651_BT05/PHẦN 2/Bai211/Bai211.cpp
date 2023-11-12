#include <iostream>
#include<iomanip>
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
void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);
int ktQuaDiem(DUONGTHANG[], int, DIEM);
void Nhap(DIEM&);

int main()
{
	DUONGTHANG dt[100];
	DIEM P;
	cout << "Nhap diem P: ";
	Nhap(P);
	int n;
	Nhap(dt, n);
	if (ktQuaDiem(dt, n, P) == 1)
		cout << "Co duong thang di qua P.";
	else
		cout << "Khong co duong thang di qua P.";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}
void Xuat(DUONGTHANG l)
{
	cout << setprecision(3);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i].a*P.x + a[i].b*P.y + a[i].c == 0)
			flag = 1;
	return flag;
}