#include <iostream>

using namespace std;

struct ngay
{
    int ng;
    int th;
    int nm;
};

typedef struct ngay NGAY;

// Hàm kiểm tra năm nhuận
int KtNhuan(NGAY x) {
    if (x.nm % 4 == 0 && x.nm % 100 != 0) {
        return 1;
    }
    if (x.nm % 400 == 0) {
        return 1;
    }
    return 0;
}

// Hàm nhập ngày
void Nhap(NGAY& x) {
    cout << "Nhap ngay: ";
    cin >> x.ng;

    cout << "Nhap thang: ";
    cin >> x.th;

    cout << "Nhap nam: ";
    cin >> x.nm;
}

// Hàm main
int main() {
    NGAY x;

    Nhap(x);

    // Kiểm tra năm nhuận
    int kq = KtNhuan(x);

    // In ra kết quả
    if (kq) {
        cout << "Nam " << x.nm << " la nam nhuan." << endl;
    }
    else {
        cout << "Nam " << x.nm << " khong phai la nam nhuan." << endl;
    }

    return 0;
}
