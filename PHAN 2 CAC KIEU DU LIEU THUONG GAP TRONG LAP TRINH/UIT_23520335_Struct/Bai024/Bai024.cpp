#include <iostream>

using namespace std;

struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;

DIEM DoiXungPhanGiac1(DIEM P) {
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}

void nhapDiem(DIEM& diem) {
	cout << "Nhap hoanh do x: ";
	cin >> diem.x;

	cout << "Nhap tung do y: ";
	cin >> diem.y;
}

int main() {
	DIEM P;

	nhapDiem(P);

	DIEM Q = DoiXungPhanGiac1(P);

	cout << "Toa do diem doi xung la: (" << Q.x << ", " << Q.y << ")" << endl;

	return 0;
}
