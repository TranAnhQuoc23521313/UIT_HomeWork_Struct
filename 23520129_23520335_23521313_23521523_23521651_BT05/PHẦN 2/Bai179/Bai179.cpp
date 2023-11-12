#include <iostream>

using namespace std;

struct diem {
    float x;
    float y;
};

typedef struct diem DIEM;

int ktTrung(DIEM P, DIEM Q) {
    if (P.x == Q.x && P.y == Q.y) {
        return 1;
    }
    return 0;
}

int TanSuat(DIEM a[], int n, DIEM P) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (ktTrung(a[i], P) == 1) {
            dem++;
        }
    }
    return dem;
}

int DemDiem(DIEM a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (TanSuat(a, n, a[i]) == 1) {
            dem++;
        }
    }
    return dem;
}

int main() {
    DIEM a[100];
    int n;

    cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "].x = ";
        cin >> a[i].x;
        cout << "a[" << i << "].y = ";
        cin >> a[i].y;
    }

    int dem = DemDiem(a, n);

    cout << "Số lượng phần tử không trùng với phần tử khác trong mảng: " << dem << endl;

    return 0;
}
