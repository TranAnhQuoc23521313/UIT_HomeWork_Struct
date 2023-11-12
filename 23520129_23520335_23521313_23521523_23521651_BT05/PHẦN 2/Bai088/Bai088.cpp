#include <iostream>
using namespace std;
struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}
void Xuat(THOIGIAN x)
{
	cout << "So thu tu giay ke tu luc 00:00:00 la: ";
	int stt = SoThuTu(x);
	cout << stt;
}
int main()
{
	THOIGIAN x;
	Nhap(x);
	Xuat(x);
}
