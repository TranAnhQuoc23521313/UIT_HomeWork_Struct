#include <iostream>

using namespace std;

struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;

// Hàm tính khoảng cách giữa hai điểm theo phương OY
float KhoangCachY(DIEM P, DIEM Q) {
	return abs(Q.y - P.y);
}

// Hàm nhập điểm
void nhapDiem(DIEM& diem) {
	cout << "Nhap hoanh do x: ";
	cin >> diem.x;

	cout << "Nhap tung do y: ";
	cin >> diem.y;
}

// Hàm main
int main() {
	DIEM P, Q;

	nhapDiem(P);
	nhapDiem(Q);

	// Tính khoảng cách giữa hai điểm theo phương OY
	float khoangCach = KhoangCachY(P, Q);

	// In ra kết quả
	cout << "Khoang cach giua hai diem theo phuong OY la: " << khoangCach << endl;

	return 0;
}
