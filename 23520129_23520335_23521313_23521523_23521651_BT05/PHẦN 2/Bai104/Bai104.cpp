#include <iostream>

using namespace std;

struct ngay
{
    int ng;
    int th;
    int nm;
};

typedef struct ngay NGAY;

// Hàm tính số ngày tối đa trong một tháng
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

// Hàm tìm ngày khi biết số thứ tự ngày trong năm
NGAY TimNgay(int stt, int nam) {
    NGAY x;

    for (int i = 1; i <= 12; i++) {
        int sn = SoNgayToiDaTrongThang({ 1, i, nam });
        if (stt <= sn) {
            x = { stt, i, nam };
            return x;
        }
        else {
            stt -= sn;
        }
    }

    return x;
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
    int stt;

    cout << "Nhap so thu tu ngay: ";
    cin >> stt;

    // Tìm ngày
    NGAY x = TimNgay(stt);

    // In ra kết quả
    cout << "Ngay " << stt << " la: " << x.ng << "/" << x.th << "/" << x.nm << endl;

    return 0;
}
