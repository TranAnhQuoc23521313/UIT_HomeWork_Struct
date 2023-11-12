#include <iostream>

using namespace std;

struct honso {
    int Nguyen;
    int Tu;
    int Mau;
};

typedef struct honso HONSO;

int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a * b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    return a + b;
}

bool KiemTraToiGian(HONSO x) {
    return (x.Tu == 0) || (UCLN(x.Tu, x.Mau) == 1 && x.Tu % x.Mau == 0);
}

void Nhap(HONSO& x) {
    cout << "Nhap phan nguyen: ";
    cin >> x.Nguyen;

    cout << "Nhap phan tu: ";
    cin >> x.Tu;

    cout << "Nhap phan mau: ";
    cin >> x.Mau;
}

int main() {
    HONSO x;

    Nhap(x);

    bool kq = KiemTraToiGian(x);

    if (kq) {
        cout << "Hỗn số tối giản." << endl;
    }
    else {
        cout << "Hỗn số không tối giản." << endl;
    }

    return 0;
}
