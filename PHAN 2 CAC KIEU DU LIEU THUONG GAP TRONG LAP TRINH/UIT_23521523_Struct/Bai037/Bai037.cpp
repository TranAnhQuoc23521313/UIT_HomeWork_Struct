#include<iostream>
#include<cmath>
using namespace std;
struct Diem
{
	float x,y,z;
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
float KhoangCach(DIEM a,DIEM b)
{
	return abs(a.z - b.z);
}
int main()
{
	DIEM a,b;
	cout << "Nhap toa do diem A:";
	Nhap(a);
	cout << "Nhap toa do diem B:";
	Nhap(b);
	cout << "\nKhoang cach theo phuong z la: ";
	cout << KhoangCach(a, b);
	return 0;
}