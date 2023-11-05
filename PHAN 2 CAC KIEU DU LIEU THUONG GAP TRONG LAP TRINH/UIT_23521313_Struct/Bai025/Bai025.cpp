#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
DIEM DoiXungPhanGiac2(DIEM);
void Xuat(DIEM);
int main()
{
	DIEM P;
	cout << "Nhap vao diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung qua duong phan giac thu hai cua P:";
	DIEM P_DX = DoiXungPhanGiac2(P);
	Xuat(P_DX);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
}

DIEM DoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}

void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y;
}