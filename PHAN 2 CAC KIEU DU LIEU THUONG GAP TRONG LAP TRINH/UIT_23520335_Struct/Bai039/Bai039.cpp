#include <iostream>

using namespace std;

struct diemkhonggian {
	float x;
	float y;
	float z;
};

typedef struct diemkhonggian DIEMKHONGGIAN;

DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P) {
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}

void nhapDiemKhongGian(DIEMKHONGGIAN& diem) {
	cout << "Nhap hoanh do x: ";
	cin >> diem.x;

	cout << "Nhap tung do y: ";
	cin >> diem.y;

	cout << "Nhap cao do z: ";
	cin >> diem.z;
}


int main() {
	DIEMKHONGGIAN P;

	nhapDiemKhongGian(P);

	DIEMKHONGGIAN Q = DoiXungGoc(P);

	cout << "Toa do diem doi xung qua goc toa do la: (" << Q.x << ", " << Q.y << ", " << Q.z << ")" << endl;

	return 0;
}
