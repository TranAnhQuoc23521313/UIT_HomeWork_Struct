#include <iostream>

using namespace std;

struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;

// Hàm nhập điểm
void nhapDiem(DIEM& diem) {
	cout << "Nhap hoanh do x: ";
	cin >> diem.x;

	cout << "Nhap tung do y: ";
	cin >> diem.y;
}

// Hàm main
int main() {
	DIEM diem;

	nhapDiem(diem);

	// In ra tọa độ điểm
	cout << "Toa do diem la: (" << diem.x << ", " << diem.y << ")" << endl;

	return 0;
}
