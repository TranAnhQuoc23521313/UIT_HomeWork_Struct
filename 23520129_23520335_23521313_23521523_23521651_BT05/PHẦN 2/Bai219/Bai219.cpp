#include <iostream>

using namespace std;

struct Diem
{
    float x;
    float y;
};

typedef struct Diem DIEM;

void Xuat(DIEM a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Diem A[" << i << "][" << j << "]: ";
            cout << a[i][j].x << " " << a[i][j].y << endl;
        }
    }
}

int main() {
    DIEM a[100][100];
    int m, n;

    cout << "Nhập số hàng: ";
    cin >> m;
    cout << "Nhập số cột: ";
    cin >> n;

    cout << "Nhập các điểm: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j].x >> a[i][j].y;
        }
    }

    Xuat(a, m, n);

    return 0;
}
