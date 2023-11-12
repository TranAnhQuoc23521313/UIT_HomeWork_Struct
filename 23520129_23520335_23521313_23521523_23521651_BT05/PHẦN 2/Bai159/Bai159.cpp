#include <iostream>

using namespace std;

struct DaThuc {
    float a[100];
    int n;
};

typedef struct DaThuc DATHUC;

void DieuChinhBac(DATHUC& d) {
    int i;

    // Tìm bậc của đa thức
    for (i = d.n - 1; i >= 0; i--) {
        if (d.a[i] != 0) {
            d.n = i + 1;
            break;
        }
    }

    // Nếu bậc của đa thức bằng 0 thì xóa toàn bộ các hệ số của đa thức
    if (d.n == 0) {
        for (i = 0; i < 100; i++) {
            d.a[i] = 0;
        }
    }
}

int main() {
    DATHUC d;

    cout << "Nhập số hệ số của đa thức: ";
    cin >> d.n;

    cout << "Nhập các hệ số của đa thức: ";
    for (int i = 0; i < d.n; i++) {
        cout << "a[" << i << "] = ";
        cin >> d.a[i];
    }

    DieuChinhBac(d);

    cout << "Đa thức sau khi điều chỉnh bậc: ";
    for (int i = 0; i < d.n; i++) {
        if (i == 0) {
            cout << d.a[i];
        }
        else {
            cout << " + " << d.a[i] << "x^" << i;
        }
    }

    return 0;
}
