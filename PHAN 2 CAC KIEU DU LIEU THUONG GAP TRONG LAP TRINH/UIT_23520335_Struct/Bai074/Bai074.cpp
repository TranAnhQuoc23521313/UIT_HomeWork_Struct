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

void RutGon(HONSO& x) {
    int kq = UCLN(x.Tu, x.Mau);
    x.Tu = x.Tu / kq;
    x.Mau = x.Mau / kq;
    x.Nguyen = x.Nguyen + x.Tu / x.Mau;
    x.Tu = x.Tu % x.Mau;
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

    RutGon(x);

    cout << "Hỗn số sau khi rút gọn la: " << x.Nguyen << " " << x.Tu << "/" << x.Mau << endl;

    return 0;
}
