#include <iostream>
#include <math.h>

using namespace std;

struct diemkhonggian {
    float x;
    float y;
    float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q) {
    return sqrt((P.x - Q.x) * (P.x - Q.x) +
        (P.y - Q.y) * (P.y - Q.y) +
        (P.z - Q.z) * (P.z - Q.z));
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
    DIEMKHONGGIAN P, Q;

    nhapDiemKhongGian(P);
    nhapDiemKhongGian(Q);

    float khoangCach = KhoangCach(P, Q);

    cout << "Khoang cach giua hai diem la: " << khoangCach << endl;

    return 0;
}
