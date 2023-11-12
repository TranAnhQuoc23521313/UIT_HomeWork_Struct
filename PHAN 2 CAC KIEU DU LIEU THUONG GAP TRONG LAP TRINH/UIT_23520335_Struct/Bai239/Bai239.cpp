#include <iostream>

using namespace std;

struct SoPhuc
{
    float Thuc;
    float Ao;
};

typedef struct SoPhuc SOPHUC;

SOPHUC ThucLonNhat(SOPHUC a[][100], int m, int n) {
    SOPHUC lc = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j].Thuc > lc.Thuc) {
                lc = a[i][j];
            }
        }
    }
    return lc;
}

int main() {
    SOPHUC a[100][100];
    int m, n;

    cout << "Nhập số hàng: ";
    cin >> m;

    cout << "Nhập số cột: ";
    cin >> n;

    cout << "Nhập các phần tử của ma trận: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j].Thuc >> a[i][j].Ao;
        }
    }

    SOPHUC soPhuc = ThucLonNhat(a, m, n);

    if (soPhuc.Thuc == 0) {
        cout << "Ma trận không có số phức nào có phần thực." << endl;
    }
    else {
        cout << "Số phức có phần thực lớn nhất trong ma trận là: " << soPhuc.Thuc << endl;
    }

    return 0;
}
