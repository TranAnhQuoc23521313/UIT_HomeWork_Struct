#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diemkhonggian 
{ 
	float x; 
	float y; 
	float z; 
}; 
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau 
{
	DIEMKHONGGIAN I; 
	float R;
}; 
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKHONGGIAN&); 
void Xuat(DIEMKHONGGIAN);
void Xuat(HINHCAU);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float DienTich(HINHCAU);

int main()
{
	HINHCAU c;
	Nhap(c);
	cout << "Dien tich xung quanh hinh cau: " << DienTich(c);
	return 0;	
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap y: ";
	cin >> P.z;
}

void Nhap(HINHCAU& C)
{
	cout << "Nhap tam I:";
	Nhap(C.I);
	cout << "Nhap R:";
	cin >> C.R;
}

float DienTich(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}

