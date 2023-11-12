#include<iostream>
#include<cmath>
using namespace std;
struct Diem
{
	float x, y, z;
};
typedef struct Diem DIEM;

void Nhap(DIEM& k)
{
	cout << "\nNhap x:";
	cin >> k.x;
	cout << "Nhap y:";
	cin >> k.y;
	cout << "Nhap z:";
	cin >> k.z;
}
DIEM DoiXung(DIEM k)
{
	DIEM temp;
	temp.x = -k.x;
	temp.y = k.y;
	temp.z = k.z;
	return temp;
}
void Xuat(DIEM k)
{
	cout << "\nx: " << k.x;
	cout << "\ny: " << k.y;
	cout << "\nz: " << k.z;
}
int main()
{
	DIEM a, b;
	cout << "Nhap toa do diem A:";
	Nhap(a);
	cout << "\nDiem doi xung qua Oyz la: ";
	b = DoiXung(a);
	Xuat(b);
	return 0;
}