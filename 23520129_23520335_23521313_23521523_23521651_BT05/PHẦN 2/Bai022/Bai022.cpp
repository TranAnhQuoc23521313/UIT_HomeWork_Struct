#include<iostream>
using namespace std;
struct Diem
{
	float a, b;
};
typedef struct Diem DIEM;

void Nhap(DIEM& k)
{
	cout << "\nNhap x:";
	cin >> k.a;
	cout << "Nhap y:";
	cin >> k.b;
}
DIEM DoiXung(DIEM& x)
{
	DIEM temp;
	temp.a = -x.a;
	temp.b = x.b;
	return temp;

}
void Xuat(DIEM k)
{
	cout << "\nx: " << k.a;
	cout << "\ny: " << k.b;
}
int main()
{
	DIEM x,y;
	cout << "Nhap toa do diem A:";
	Nhap(x);
	cout << "\nDiem doi xung la: ";
	y=DoiXung(x);
	Xuat(y);
	return 0;
}