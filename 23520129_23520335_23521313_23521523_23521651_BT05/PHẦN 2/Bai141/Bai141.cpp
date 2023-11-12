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
DIEM TrongTam(TAMGIAC);
void Xuat(TAMGIAC);
void Nhap(TAMGIAC&);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	cout << "Trong tam cua tam giac la: " << endl;
	Xuat(TrongTam(tg));
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

void Xuat(DIEM t)
{
	cout << "Toa do x: " << t.x << endl;
	cout << "Toa do y: " << t.y;
}

DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}