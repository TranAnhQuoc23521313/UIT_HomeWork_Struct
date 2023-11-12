#include <iostream>
#include <iomanip>
using namespace std;

struct diem { 
	float x; 
	float y; 
}; 
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
}; 
typedef struct duongtron DUONGTRON;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM&); 
void Xuat(DIEM);
void Nhap(DUONGTRON&); 
void Nhap(DUONGTHANG&);
void Xuat(DUONGTRON);
float DienTich(DUONGTRON); 
float ChuVi(DUONGTRON);
int TuongDoi(DUONGTRON, DUONGTHANG);

int main()
{
	DUONGTRON dtr;
	DUONGTHANG dt;
	cout << "Nhap duong tron\n";
	Nhap(dtr);
	cout << "Nhap duong thang\n";
	Nhap(dt);
	if (TuongDoi(dtr, dt) == 0)
		cout << "Duong thang khong cat duong tron.";
	else if (TuongDoi(dtr, dt) == 1)
		cout << "Duong thang tiep xuc voi duong tron.";
	else cout << "Duong thang cat duong tron tai hai diem.";
	return 0;
}


void Nhap(DUONGTHANG& i)
{
	cout << "Nhap a: ";
	cin >> i.a;
	cout << "Nhap b: ";
	cin >> i.b;
	cout << "Nhap c: ";
	cin >> i.c;
}

void Nhap(DIEM& i)
{
	cout << "Nhap x: ";
	cin >> i.x;
	cout << "Nhap y: ";
	cin >> i.y;
}
void Xuat(DIEM i)
{
	cout << "(" << i.x << ";" << i.y << ")";
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = abs(d.a * c.I.x + d.b * c.I.y + d.c) / sqrt(d.a*d.a + d.b*d.b);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}