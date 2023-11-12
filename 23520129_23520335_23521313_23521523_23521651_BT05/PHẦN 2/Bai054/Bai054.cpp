#include <iostream>

using namespace std;

struct phanso {
    int Tu;
    int Mau;
};
typedef struct phanso PHANSO;

int ktDuong(PHANSO x) {
    if (x.Tu * x.Mau > 0) {
        return 1;
    }
    return 0;
}

void nhapPhanSo(PHANSO& phanSo) {
    cout << "Nhap tu so: ";
    cin >> phanSo.Tu;

    cout << "Nhap mau so: ";
    cin >> phanSo.Mau;
}

int main() {
    PHANSO x;

    nhapPhanSo(x);

    int kt = ktDuong(x);

    if (kt == 1) {
        cout << "Phan so la duong" << endl;
    }
    else {
        cout << "Phan so khong duong" << endl;
    }

    return 0;
}
