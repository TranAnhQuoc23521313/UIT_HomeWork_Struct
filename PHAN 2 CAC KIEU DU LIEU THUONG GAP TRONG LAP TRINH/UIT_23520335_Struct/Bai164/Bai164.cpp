#include <iostream>

using namespace std;

struct DaThuc {
    float a[100];
    int n;
};

typedef struct DaThuc DATHUC;

DATHUC ThuongLayDu(DATHUC d1, DATHUC d2) {
    DATHUC d;
    int i, j;

    // Nếu bậc của đa thức thứ nhất nhỏ hơn hoặc bằng bậc của đa thức thứ hai thì đa thức dư là đa thức thứ nhất
    if (d1.n <= d2.n) {
        d.n = d1.n;
        for (i = 0; i < d.n; i++) {
            d.a[i] = d1.a[i];
        }
    }
    else {
        // Nếu bậc của đa thức thứ nhất lớn hơn bậc của đa thức thứ hai thì đa thức dư là đa thức bậc 0
        d.n = 0;
    }

    // Duyệt qua các hệ số của đa thức thứ nhất
    for (i = d1.n - 1; i >= 0; i--) {
        // Nếu hệ số của đa thức thứ nhất không bằng 0 thì thực hiện phép chia
        if (d1.a[i] != 0) {
            // Khởi tạo đa thức tạm thời
            DATHUC temp;
            temp.n = i + 1;
            for (j = 0; j < temp.n; j++) {
                temp.a[j] = d1.a[j];
            }

            // Thực hiện phép chia
            d = ThuongLayDu(temp, d2);

            // Xóa các hệ số thừa của đa thức dư
            for (j = d.n; j < d1.n; j++) {
                d1.a[j] = 0;
            }
        }
    }

    return d;
}

int main() {
    DATHUC d1, d2, d;

    cout << "Nhập đa thức thứ nhất: ";
    NhapDaThuc(d1);

    cout << "Nhập đa thức thứ hai: ";
    NhapDaThuc(d2);

    d = ThuongLayDu(d1, d2);

    cout << "Đa thức dư: ";
    XuatDaThuc(d);

    return 0;
}
