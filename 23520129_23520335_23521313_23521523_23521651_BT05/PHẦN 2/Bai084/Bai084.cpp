#include <iostream>

using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

void Xuat(THOIGIAN x) {
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
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
	THOIGIAN x;

	Nhap(x);

	Xuat(x);

	return 0;
}
