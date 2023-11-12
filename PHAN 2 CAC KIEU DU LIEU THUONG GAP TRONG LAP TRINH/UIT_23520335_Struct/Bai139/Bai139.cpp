#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn điểm
struct diem
{
	float x;
	float y;
};

typedef struct diem DIEM;

// Khai báo kiểu dữ liệu biểu diễn tam giác
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};

typedef struct tamgiac TAMGIAC;

// Hàm nhập tam giác
void Nhap(TAMGIAC& t)
{
	cout << "Nhap toa do diem A: ";
	cin >> t.A.x >> t.A.y;

	cout << "Nhap toa do diem B: ";
	cin >> t.B.x >> t.B.y;

	cout << "Nhap toa do diem C: ";
	cin >> t.C.x >> t.C.y;
}

// Hàm tính khoảng cách giữa hai điểm
float KhoangCach(DIEM P1, DIEM P2) {
	return sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y));
}

// Hàm tính chu vi tam giác
float ChuVi(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	return a + b + c;
}

// Hàm main
int main() {
	TAMGIAC t;

	Nhap(t);

	// Tính chu vi tam giác
	float kc = ChuVi(t);

	// Xuất chu vi tam giác
	cout << "Chu vi tam giac: " << kc << endl;

	return 0;
}
