#include <iostream>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
int SoSanh(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN time_1, time_2;
	cout << "Nhap vao thoi gian thu nhat: " << endl;
	Nhap(time_1);
	cout << "Nhap vao thoi gian thu hai: " << endl;
	Nhap(time_2);
	switch (SoSanh(time_1,time_2))
	{
	case 1:
			cout << "Thoi gian thu nhat > Thoi Gian thu hai";
			break;
	case -1:
			cout << "Thoi gian thu nhat < Thoi Gian thu hai";
			break;
	case 0:
			cout << "Thoi gian thu nhat = Thoi Gian thu hai";
			break;
	}
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

int SoSanh(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	return 0;
}