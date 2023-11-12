#include <iostream>

using namespace std;

struct sophuc {
	float Thuc;
	float Ao;
};

typedef struct sophuc SOPHUC;

SOPHUC Thuong(SOPHUC x, SOPHUC y) {
	float mc = y.Thuc * y.Thuc + y.Ao * y.Ao;
	SOPHUC temp;
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}

void Nhap(SOPHUC& x) {
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

int main() {
	SOPHUC x, y;

	Nhap(x);
	Nhap(y);

	SOPHUC z = Thuong(x, y);

	cout << "Thuong hai so phuc la: " << z.Thuc << " + " << z.Ao << "i" << endl;

	return 0;
}
