#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn điểm
struct diemkhonggian
{
	float x;
	float y;
	float z;
};

typedef struct diemkhonggian DIEMKHONGGIAN;

// Khai báo kiểu dữ liệu biểu diễn hình cầu
struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};

typedef struct hinhcau HINHCAU;

// Hàm nhập hình cầu
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);

	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

// Hàm nhập điểm
void Nhap(DIEMKHONGGIAN& x) {
	cout << "Nhap toa do x: ";
	cin >> x.x;

	cout << "Nhap toa do y: ";
	cin >> x.y;

	cout << "Nhap toa do z: ";
	cin >> x.z;
}

// Hàm main
int main() {
	HINHCAU c;

	Nhap(c);

	// In hình cầu
	cout << "Tam: (" << c.I.x << ", " << c.I.y << ", " << c.I.z << ")" << endl;
	cout << "Ban kinh: " << c.R << endl;

	return 0;
}
