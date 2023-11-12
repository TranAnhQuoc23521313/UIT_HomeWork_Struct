#include <iostream>
#include <cmath>

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
void Nhap(DUONGTHANG&);
float KhoangCach(DUONGTHANG, DIEM);

int main()
{
	DIEM P;
	DUONGTHANG d;
	cout << "Nhap vao diem P:" << endl;
	Nhap(P);
	cout << "Nhap vao duong thang d: " << endl;
	Nhap(d);
	float kc = KhoangCach(d, P);
	cout << "Khoang cach giua P va d: " << kc;
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
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
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}