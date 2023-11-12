#include <iostream>

using namespace std;

struct ngay
{
    int ng;
    int th;
    int nm;
};

typedef struct ngay NGAY;

int KtNhuan(NGAY x) {
    if (x.nm % 4 == 0 && x.nm % 100 != 0) {
        return 1;
    }
    if (x.nm % 400 == 0) {
        return 1;
    }
    return 0;
}

// Hàm tính số ngày tối đa trong tháng
int SoNgayToiDaTrongThang(NGAY x) {
    if (x.th == 1 || x.th == 3 || x.th == 5 || x.th == 7 || x.th == 8 || x.th == 10 || x.th == 12) {
        return 31;
    }
    else if (x.th == 4 || x.th == 6 || x.th == 9 || x.th == 11) {
        return 30;
    }
    else {
        if (KtNhuan(x)) {
            return 29;
        }
        else {
            return 28;
        }
    }
}

// Hàm tính số thứ tự ngày trong năm
int SoThuTuTrongNam(NGAY x) {
    int stt = 0;
    for (int i = 1; i <= x.th - 1; i++) {
        NGAY temp = { 1, i, x.nm };
        stt += SoNgayToiDaTrongThang(temp);
    }
    return (stt + x.ng);
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

    // Tính số thứ tự ngày trong năm
    int kq = SoThuTuTrongNam(x);

    // In ra kết quả
    cout << "So thu tu cua ngay " << x.ng << "/" << x.th << "/" << x.nm << " la: " << kq << endl;

    return 0;
}
