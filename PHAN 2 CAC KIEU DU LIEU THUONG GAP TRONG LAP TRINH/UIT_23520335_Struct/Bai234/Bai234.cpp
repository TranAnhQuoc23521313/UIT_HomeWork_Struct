#include <iostream>

using namespace std;

struct SoPhuc
{
    float Thuc;
    float Ao;
};

typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC a[][100], int& m, int& n) {
    cout << "Nhập số hàng: ";
    cin >> m;
    cout << "Nhập số cột: ";
    cin >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]:\n";
            Nhap(a[i][j]);
        }
    }
}

void Nhap(SOPHUC& a) {
    cout << "Thuc: ";
    cin >> a.Thuc;
    cout << "Ao: ";
    cin >> a.Ao;
}

int main() {
    SOPHUC a[100][100];
    int m, n;

    Nhap(a, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j].Thuc << " + " << a[i][j].Ao << "i\n";
        }
    }

    return 0;
}
