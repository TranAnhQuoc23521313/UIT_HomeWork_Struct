#include <iostream>

using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;


int KhoangCach(THOIGIAN x, THOIGIAN y) {
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}


int SoThuTu(THOIGIAN x) {
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}


void Nhap(THOIGIAN& x) {
	cout << "Nhap gio: ";
	cin >> x.Gio;

	cout << "Nhap phut: ";
	cin >> x.Phut;

	cout << "Nhap giay: ";
	cin >> x.Giay;
}


int main() {
	THOIGIAN x, y;

	Nhap(x);
	Nhap(y);

	int kq = KhoangCach(x, y);

	cout << "Khoang cach giua hai thoi gian la: " << kq << endl;

	return 0;
}
