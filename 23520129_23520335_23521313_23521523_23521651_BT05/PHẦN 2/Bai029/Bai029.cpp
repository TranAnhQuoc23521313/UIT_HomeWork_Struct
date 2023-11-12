#include <iostream>

using namespace std;

struct Diem {
    float x;
    float y;
};
typedef struct Diem DIEM;

int ktThuoc3(DIEM P) {
    if (P.x < 0 && P.y < 0)
        return 1;
    return 0;
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

    int kt = ktThuoc3(P);

    if (kt == 1) {
        cout << "Diem thuoc phan tu thu 3" << endl;
    }
    else {
        cout << "Diem khong thuoc phan tu thu 3" << endl;
    }
    return 0;
}
