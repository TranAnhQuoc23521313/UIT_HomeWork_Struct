#include <iostream>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Xuat(HINHCAU);

int main()
{
	HINHCAU C;
	cout << "Nhap vao hinh cau (C): " << endl;
	Nhap(C);
	cout << "Hinh cau (C) co: ";
	Xuat(C);
	return 0;
}

void Nhap(HINHCAU& C)
{
	cout << "Nhap Tam: " << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(HINHCAU C)
{
	cout << "\n Tam: ";
	Xuat(C.I);
	cout << "\n Ban kinh: " << C.R;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\n   x = " << P.x;
	cout << "\n   y = " << P.y;
	cout << "\n   z = " << P.z;
}