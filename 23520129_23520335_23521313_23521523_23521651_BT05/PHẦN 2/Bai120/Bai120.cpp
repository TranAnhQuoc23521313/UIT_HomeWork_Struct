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

int main()
{
	DUONGTRON C;
	cout << "Nhap vao (C): " << endl;
	Nhap(C);
	cout << "Duong tron (C): ";
	cout << "\nTam: ";
	cout << "\nx = " << C.I.x;
	cout << "\ny = " << C.I.y;
	cout << "\nBan kinh: " << C.R;
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

