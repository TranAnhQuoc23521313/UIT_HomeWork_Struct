#include <iostream>

using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};

typedef struct PhanSo PHANSO;

int ktAm(PHANSO a) {
    return (a.Tu < 0);
}

int SoSanh(PHANSO a, PHANSO b) {
    if (a.Tu * b.Mau < b.Tu * a.Mau) {
        return -1;
    }
    else if (a.Tu * b.Mau > b.Tu * a.Mau) {
        return 1;
    }
    else {
        return 0;
    }
}

int TimViTri(PHANSO a[], int n) {
    if (n == 0) {
        return -1;
    }

    int lc = TimViTri(a, n - 1);

    if (ktAm(a[n - 1])) {
        if (lc == -1 || SoSanh(a[n - 1], a[lc]) == 1) {
            return n - 1;
        }
    }

    return lc;
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

    int viTri = TimViTri(a, n);

    if (viTri == -1) {
        cout << "Mảng không có giá trị âm" << endl;
    }
    else {
        cout << "Vị trí giá trị âm lớn nhất trong mảng là: " << viTri << endl;
    }

    return 0;
}
