#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn đơn thức
struct donthuc
{
    float a;
    int n;
};

typedef struct donthuc DONTHUC;

// Hàm nhập đơn thức
void Nhap(DONTHUC& x) {
    cout << "Nhap he so: ";
    cin >> x.a;

    cout << "Nhap so mu: ";
    cin >> x.n;
}

// Hàm xuất đơn thức
void Xuat(DONTHUC x) {
    if (x.n == 0) {
        cout << x.a;
    }
    else if (x.n == 1) {
        cout << x.a << "x";
    }
    else {
        cout << x.a << "x^" << x.n;
    }
}

// Hàm tính đạo hàm cấp 1 đơn thức
DONTHUC DaoHam(DONTHUC f) {
    DONTHUC temp;
    temp.a = f.a * f.n;
    temp.n = f.n - 1;
    return temp;
}

// Hàm main
int main() {
    DONTHUC x;

    Nhap(x);

    // Xuất đơn thức
    Xuat(x);

    // Tính và xuất đạo hàm
    DONTHUC y = DaoHam(x);
    Xuat(y);

    return 0;
}
