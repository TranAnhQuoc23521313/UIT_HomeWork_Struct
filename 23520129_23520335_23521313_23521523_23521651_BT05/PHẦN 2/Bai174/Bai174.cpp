#include <iostream>

using namespace std;

struct diem {
    float x;
    float y;
};

typedef struct diem DIEM;

void Xuat(DIEM a) {
    cout << "(" << a.x << ", " << a.y << ")" << endl;
}

void XuatMang(DIEM a[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        Xuat(a[i]);
    }
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

    XuatMang(a, n);

    return 0;
}
