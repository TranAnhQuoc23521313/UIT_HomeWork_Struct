#include <iostream>
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

void Nhap(DUONGTRON[], int&);
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int ktTiepXucOy(DUONGTRON);
int KiemTra(DUONGTRON[], int);

int main()
{
	DUONGTRON c[100];
	int n;
	Nhap(c, n);
	if (KiemTra(c, n) == 1)
		cout << "Co duong tron tiep xuc truc tung.";
	else cout << "Khong co duong tron tiep xuc trung tung.";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.R)
		return 1;
	return 0;
}

int KiemTra(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(a[i]) == 1)
			flag = 1;
	return flag;
}