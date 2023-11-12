#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn điểm
struct diem
{
	float x;
	float y;
};

typedef struct diem DIEM;

// Khai báo kiểu dữ liệu biểu diễn đường thẳng
struct duongthang
{
	float a;
	float b;
	float c;
};

typedef struct duongthang DUONGTHANG;

// Khai báo kiểu dữ liệu biểu diễn đường tròn
struct duongtron
{
	DIEM I;
	float R;
};

typedef struct duongtron DUONGTRON;

// Hàm nhập đường tròn
void Nhap(DUONGTRON& x) {
	cout << "Nhap toa do trung tam: ";
	cin >> x.I.x >> x.I.y;

	cout << "Nhap ban kinh: ";
	cin >> x.R;
}

// Hàm xuất đường tròn
void Xuat(DUONGTRON x) {
	cout << "Toa do trung tam: (" << x.I.x << ", " << x.I.y << ")" << endl;
	cout << "Ban kinh: " << x.R << endl;
}

// Hàm main
int main() {
	DUONGTRON x;

	Nhap(x);

	// Xuất đường tròn
	Xuat(x);

	return 0;
}
