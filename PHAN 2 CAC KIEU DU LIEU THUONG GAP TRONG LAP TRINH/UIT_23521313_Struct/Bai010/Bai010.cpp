#include <iostream>
#include <iomanip>

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

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

int main()
{
	HINHCAU s;
	Nhap(s);

	cout << "\nHinh cau vua nhap: \n";
	Xuat(s);
	return 0;
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

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

void Nhap(HINHCAU& C)
{
	cout << "Nhap tam: \n";
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Xuat(HINHCAU C)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "Tam: " << endl;
	Xuat(C.I);
	cout << "\nBan kinh: " << C.R;
}