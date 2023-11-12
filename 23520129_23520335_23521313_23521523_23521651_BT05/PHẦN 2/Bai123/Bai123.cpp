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

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
float DienTich(DUONGTRON);

int main()
{
	DUONGTRON C;
	cout << "Nhap vao (C): " << endl;
	Nhap(C);
	cout << "Dien Tich cua Duong Tron (C) S = " << DienTich(C);
	return 0;
}

void Nhap(DUONGTRON& C)
{
	cout << "Nhap vao tam: " << endl;
	Nhap(C.I);
	cout << "Nhap vao ban kinh R: ";
	cin >> C.R;
}

void Nhap(DIEM& I)
{
	cout << "Nhap X = ";
	cin >> I.x;
	cout << "Nhap Y = ";
	cin >> I.y;
}

float DienTich(DUONGTRON C)
{
	return 3.14 * C.R * C.R;
}