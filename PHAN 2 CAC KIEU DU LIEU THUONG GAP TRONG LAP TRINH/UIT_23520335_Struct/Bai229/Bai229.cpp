#include <iostream>

using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};

typedef struct PhanSo PHANSO;

int SoSanh(PHANSO a, PHANSO b) {
    if (a.Tu * b.Mau > b.Tu * a.Mau) {
        return 1;
    }
    else {
        return 0;
    }
}

PHANSO LonNhat(PHANSO a[][100], int m, int n) {
    PHANSO lc = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (SoSanh(a[i][j], lc) == 1) {
                lc = a[i][j];
            }
        }
    }
    return lc;
}

int main() {
    PHANSO a[100][100];
    int m, n;

    cout << "Nhập số hàng của ma trận: ";
    cin >> m;

    cout << "Nhập số cột của ma trận: ";
    cin >> n;

    cout << "Nhập các phần tử của ma trận: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j].Tu >> a[i][j].Mau;
        }
    }

    PHANSO phanSoLonNhat = LonNhat(a, m, n);

    cout << "Phân số lớn nhất trong ma trận là: " << phanSoLonNhat.Tu << "/" << phanSoLonNhat.Mau << endl;

    return 0;
}
