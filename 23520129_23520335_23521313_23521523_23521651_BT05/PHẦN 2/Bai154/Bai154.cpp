#include <iostream>

using namespace std;

struct diem {
	float x;
	float y;
};

typedef struct diem DIEM;

struct duongthang {
	float a;
	float b;
	float c;
};

typedef struct duongthang DUONGTHANG;

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2) {
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}

int main() {
	DUONGTHANG d1, d2;

	cout << "Nhập tọa độ của đường thẳng thứ nhất: ";
	cin >> d1.a >> d1.b >> d1.c;

	cout << "Nhập tọa độ của đường thẳng thứ hai: ";
	cin >> d2.a >> d2.b >> d2.c;

	DIEM giaoDiem = GiaoDiem(d1, d2);

	cout << "Tọa độ giao điểm: (" << giaoDiem.x << "," << giaoDiem.y << ")" << endl;

	return 0;
}
