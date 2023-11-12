#include<iostream>
using namespace std;

struct diem
{
	float x, y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A ,B,C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(DIEM& c)
{
	cout << "\nNhap x:";
	cin >> c.x;
	cout << "Nhap y:";
	cin >> c.y;
}
void Nhap(TAMGIAC& c)
{
	cout << "Nhap toa do A:";
	Nhap(c.A);
	cout << "Nhap toa do B:";
	Nhap(c.B);
	cout << "Nhap toa do C:";
	Nhap(c.C);
}
void Xuat(DIEM k)
{
	cout << "(" << k.x << "," << k.y << ")";
}
void Xuat(TAMGIAC c)
{
	cout << "Toa do dinh A";
	Xuat(c.A);
	cout << "\nToa do dinh B";
	Xuat(c.B);
	cout << "\nToa do dinh C";
	Xuat(c.C);

}
int main()
{
	TAMGIAC a;
	Nhap(a);
	Xuat(a);
	return 0;
}