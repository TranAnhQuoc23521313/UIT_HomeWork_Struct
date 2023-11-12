#include <iostream>
#include <cmath>

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
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
int KtThuoc(HINHCAU, DIEMKHONGGIAN);

int main()
{
	HINHCAU C;
	cout << "Nhap vao hinh cau (C): " << endl;
	Nhap(C);
	DIEMKHONGGIAN P;
	cout << "Nhap toa do diem P: " << endl;
	Nhap(P);
	if (KtThuoc(C, P) == 1)
		cout << "P thuoc (C)";
	else
		cout << "P khong thuoc (C)";
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

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	float kc = sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2) + pow(Q.z - P.z, 2));
	return kc;
}

int KtThuoc(HINHCAU C, DIEMKHONGGIAN P)
{
	float kc = KhoangCach(C.I, P);
	if (kc <= C.R)
		return 1;
	return 0;
}