#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
void Nhap(TAMGIAC&);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	return 0;
}

void Nhap(DIEM& t)
{
	cout << "Nhap x: ";
	cin >> t.x;
	cout << "Nhap y: ";
	cin >> t.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}