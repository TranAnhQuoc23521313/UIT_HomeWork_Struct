#include<iostream>
#include<cmath>
using namespace std;
struct thoigian
{
	int Gio, Phut, Giay;
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
THOIGIAN TruocDo(THOIGIAN k)
{
	k.Giay--;
	if (k.Giay < 0)
	{
		k.Phut--;
		if (k.Phut < 0)
		{
			k.Gio--;
			if (k.Gio < 0)
				k.Gio = 23;
			k.Phut = 59;
		}
		k.Giay = 59;
	}
	return k;

}
void Xuat(THOIGIAN k)
{
	cout << k.Gio << ":" << k.Phut << ":"<<k.Giay;
}
int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:";
	Nhap(a);
	a = TruocDo(a);
	Xuat(a);
	return 0;
}