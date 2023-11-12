#include <iostream>

using namespace std;

struct DaThuc {
    float a[100];
    int n;
};

typedef struct DaThuc DATHUC;

void DieuChinhBac(DATHUC& d) {
    int i;

    // Tìm bậc của đa thức
    for (i = d.n - 1; i >= 0; i--) {
        if (d.a[i] != 0) {
            d.n = i + 1;
            break;
        }
    }

    // Nếu bậc của đa thức bằng 0 thì xóa toàn bộ các hệ số của đa thức
    if (d.n == 0) {
        for (i = 0; i < 100; i++) {
            d.a[i] = 0;
        }
    }
}

void NhapDaThuc(DATHUC& d) {
    cout << "Nhập số hệ số của đa thức: ";
    cin >> d.n;

    cout << "Nhập các hệ số của đa thức: ";
    for (int i = 0; i < d.n; i++) {
        cout << "a[" << i << "] = ";
        cin >> d.a[i];
    }
}

void XuatDaThuc(DATHUC d) {
    int i;

    for (i = 0; i < d.n; i++) {
        if (i == 0) {
            cout << d.a[i];
        }
        else {
            cout << " + " << d.a[i] << "x^" << i;
        }
    }
}

DATHUC operator-(DATHUC d1, DATHUC d2) {
    DATHUC d;
    int i;

    DieuChinhBac(d1);
    DieuChinhBac(d2);

    d.n = d1.n;
    for (i = 0; i < d.n; i++) {
        d.a[i] = d1.a[i] - d2.a[i];
    }

    for (i = d.n - 1; i >= 0; i--) {
        if (d.a[i] == 0) {
            d.n--;
        }
        else {
            break;
        }
    }

    return d;
}

int main() {
    DATHUC d1, d2, d;

    cout << "Nhập đa thức thứ nhất: ";
    NhapDaThuc(d1);

    cout << "Nhập đa thức thứ hai: ";
    NhapDaThuc(d2);

    d = d1 - d2;

    cout << "Đa thức kết quả: ";
    XuatDaThuc(d);

    return 0;
}
