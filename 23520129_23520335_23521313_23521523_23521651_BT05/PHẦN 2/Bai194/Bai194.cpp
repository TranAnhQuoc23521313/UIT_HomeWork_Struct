#include <iostream>

using namespace std;

struct SoPhuc
{
    float Thuc;
    float Ao;
};

typedef struct SoPhuc SOPHUC;

int ktDuong(SOPHUC a) {
    return (a.Thuc > 0 && a.Ao > 0);
}

SOPHUC DauTien(SOPHUC a[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        if (ktDuong(a[i])) {
            return a[i];
        }
    }

    SOPHUC lc = { 0, 0 };
    return lc;
}

int main() {
    SOPHUC a[100];
    int n;

    cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "].Thuc = ";
        cin >> a[i].Thuc;
        cout << "a[" << i << "].Ao = ";
        cin >> a[i].Ao;
    }

    SOPHUC soPhuc = DauTien(a, n);

    if (soPhuc.Thuc == 0 && soPhuc.Ao == 0) {
        cout << "Mảng không có số phức có phần thực dương và phần ảo dương" << endl;
    }
    else {
        cout << "Số phức đầu tiên trong mảng có phần thực dương và phần ảo dương là: " << soPhuc << endl;
    }

    return 0;
}
