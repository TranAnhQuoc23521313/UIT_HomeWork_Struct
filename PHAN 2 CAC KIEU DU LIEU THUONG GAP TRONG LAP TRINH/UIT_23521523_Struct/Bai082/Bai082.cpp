#include<iostream>
#include<cmath>
using namespace std;
struct thoigian
{
	int Gio, Phut ,Giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN& k)
{
	cout << "\nNhap gio:";
	cin >> k.Gio;
	cout << "Nhap phut:";
	cin >> k.Phut;
	cout << "Nhap giay:";
	cin >> k.Giay;
}

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:";
	Nhap(a);
	return 0;
}