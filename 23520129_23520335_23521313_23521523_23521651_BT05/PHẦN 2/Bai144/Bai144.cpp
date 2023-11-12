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

// Hàm tính tổng khoảng cách từ điểm 𝑃(𝑥, 𝑦) tới 3 đỉnh của tam giác
float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float a = KhoangCach(t.A, P);
	float b = KhoangCach(t.B, P);
	float c = KhoangCach(t.C, P);
	return a + b + c;
}

// Hàm main
int main() {
	TAMGIAC t;
	DIEM P;

	Nhap(t);

	// Nhập toa do điểm 𝑃(𝑥, 𝑦)
	cout << "Nhap toa do diem P: ";
	cin >> P.x >> P.y;

	// Tính tổng khoảng cách từ điểm 𝑃(𝑥, 𝑦) tới 3 đỉnh của tam giác
	float kc = TongKhoangCach(t, P);

	// Xuất tổng khoảng cách
	cout << "Tong khoang cach: " << kc << endl;

	return 0;
}
