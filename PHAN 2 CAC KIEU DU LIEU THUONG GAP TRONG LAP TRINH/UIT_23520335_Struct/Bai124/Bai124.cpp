#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn điểm
struct diem
{
    float x;
    float y;
};

typedef struct diem DIEM;

// Khai báo kiểu dữ liệu biểu diễn đường thẳng
struct duongthang
{
    float a;
    float b;
    float c;
};

typedef struct duongthang DUONGTHANG;

// Khai báo kiểu dữ liệu biểu diễn đường tròn
struct duongtron
{
    DIEM I;
    float R;
};

typedef struct duongtron DUONGTRON;

// Hàm nhập đường tròn
void Nhap(DUONGTRON& x) {
    cout << "Nhap toa do trung tam: ";
    cin >> x.I.x >> x.I.y;

    cout << "Nhap ban kinh: ";
    cin >> x.R;
}

// Hàm xuất đường tròn
void Xuat(DUONGTRON x) {
    cout << "Toa do trung tam: (" << x.I.x << ", " << x.I.y << ")" << endl;
    cout << "Ban kinh: " << x.R << endl;
}

// Hàm tính khoảng cách giữa hai điểm
float KhoangCach(DIEM P1, DIEM P2) {
    return sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y));
}

// Hàm kiểm tra một tọa độ điểm có nằm trong đường tròn hay không
int ktThuoc(DUONGTRON c, DIEM P) {
    float kc = KhoangCach(c.I, P);
    if (kc <= c.R)
        return 1;
    return 0;
}

// Hàm main
int main() {
    DUONGTRON c;
    DIEM P;

    Nhap(c);

    // Nhập tọa độ điểm
    cout << "Nhap toa do diem: ";
    cin >> P.x >> P.y;

    // Kiểm tra tọa độ điểm có nằm trong đường tròn hay không
    if (ktThuoc(c, P)) {
        cout << "Diem nam trong duong tron" << endl;
    }
    else {
        cout << "Diem khong nam trong duong tron" << endl;
    }

    return 0;
}
