#include <iostream>

using namespace std;

struct phanso {
    int Tu;
    int Mau;
};
typedef struct phanso PHANSO;

void RutGon(PHANSO& phanSo) {
    int uoc = 1;
    for (int i = phanSo.Tu; i > 0; i--) {
        if (phanSo.Tu % i == 0 && phanSo.Mau % i == 0) {
            phanSo.Tu /= i;
            phanSo.Mau /= i;
            uoc = i;
        }
    }
    if (uoc > 1) {
        cout << "Phan so sau khi rut gon la: " << phanSo.Tu << "/" << phanSo.Mau << endl;
    }
}

PHANSO Hieu(PHANSO x, PHANSO y) {
    PHANSO temp;
    temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
    temp.Mau = x.Mau * y.Mau;
    RutGon(temp);
    return temp;
}

void nhapPhanSo(PHANSO& phanSo) {
    cout << "Nhap tu so: ";
    cin >> phanSo.Tu;

    cout << "Nhap mau so: ";
    cin >> phanSo.Mau;
}

int main() {
    PHANSO x, y;

    nhapPhanSo(x);
    nhapPhanSo(y);

    PHANSO z = Hieu(x, y);

    cout << "Hieu cua hai phan so la: " << z.Tu << "/" << z.Mau << endl;

    return 0;
}
