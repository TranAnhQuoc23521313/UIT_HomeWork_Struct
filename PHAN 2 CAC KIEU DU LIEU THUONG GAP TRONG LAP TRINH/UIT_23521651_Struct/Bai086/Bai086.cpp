#include<iostream>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&);
THOIGIAN KeTiep(THOIGIAN);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN t;
	Nhap(t);
	cout << "Thoi gian o giay ke tiep la: ";
	Xuat(KeTiep(t));
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

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

THOIGIAN KeTiep(THOIGIAN x)
{
	x.Giay++;
	if (x.Giay > 59)
	{
		x.Phut++;
		if (x.Phut > 59)
		{
			x.Gio++;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;
		}
		x.Giay = 0;
	}
	return x;
}