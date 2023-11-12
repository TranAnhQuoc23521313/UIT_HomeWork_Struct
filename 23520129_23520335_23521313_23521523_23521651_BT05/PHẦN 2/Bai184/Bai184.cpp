#include <iostream>

using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};

typedef struct PhanSo PHANSO;

int ktDuong(PHANSO a) {
    return (a.Tu > 0 && a.Mau > 0);
}

int DemDuong(PHANSO a[], int n) {
    int dem = 0;
    for (int i = 0; i <= n - 1; i++) {
        if (ktDuong(a[i])) {
            dem++;
        }
    }
    return dem;
}

int main() {
    PHANSO a[100];
    int n;

    cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "].Tu = ";
        cin >> a[i].Tu;
        cout << "a[" << i << "].Mau = ";
        cin >> a[i].Mau;
    }

    int dem = DemDuong(a, n);

    cout << "Số lượng phân số dương trong mảng: " << dem << endl;

    return 0;
}
