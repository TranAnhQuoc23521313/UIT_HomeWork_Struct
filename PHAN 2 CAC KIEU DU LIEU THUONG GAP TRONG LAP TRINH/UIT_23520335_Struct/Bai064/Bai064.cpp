#include <iostream>

using namespace std;

struct sophuc {
	float Thuc;
	float Ao;
};

typedef struct sophuc SOPHUC;

void Nhap(SOPHUC& x) {
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

int main() {
	SOPHUC x;

	Nhap(x);

	cout << "So phuc vua nhap la: " << x.Thuc << " + " << x.Ao << "i" << endl;

	return 0;
}
