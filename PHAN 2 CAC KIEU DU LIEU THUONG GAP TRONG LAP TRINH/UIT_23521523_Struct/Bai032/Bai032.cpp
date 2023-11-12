#include<iostream>
using namespace std;
struct Diem
{
	float a, b, c;
};
typedef struct Diem DIEM;

void Nhap(DIEM& k)
{
	cout << "\nNhap x:";
	cin >> k.a;
	cout << "Nhap y:";
	cin >> k.b; 
	cout << "Nhap z:";
	cin >> k.c;
}

int main()
{
	DIEM x;
	cout << "Nhap toa do diem A:";
	Nhap(x);
	return 0;
}