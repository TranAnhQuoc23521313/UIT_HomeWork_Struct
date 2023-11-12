#include <iostream>

using namespace std;

// Khai báo kiểu dữ liệu biểu diễn điểm
struct diemkhonggian
{
    float x;
    float y;
    float z;
};

typedef struct diemkhonggian DIEMKHONGGIAN;

// Khai báo kiểu dữ liệu biểu diễn đường thẳng
struct duongthang
{
    DIEMKHONGGIAN A;
    DIEMKHONGGIAN B;
};

typedef struct duongthang DUONGTHANG;

// Hàm nhập đường thẳng
void Nhap(DUONGTHANG& d)
{
    cout << "Nhap toa do diem A: ";
    cin >> d.A.x >> d.A.y >> d.A.z;

    cout << "Nhap toa do diem B: ";
    cin >> d.B.x >> d.B.y >> d.B.z;
}

// Hàm kiểm tra một điểm có thuộc đường thẳng hay không
int ktThuoc(DUONGTHANG d, DIEMKHONGGIAN P)
{
    // Nếu tổng của tích vô hướng của hai véctơ AB và AP bằng 0 thì điểm P thuộc đường thẳng d
    float t = d.A.x * (d.B.y - d.A.y) + d.A.y * (d.B.x - d.A.x) + d.A.z * (d.B.z - d.A.z);
    if (t == 0)
        return 1;
    return 0;
}

// Hàm main
int main() {
    DUONGTHANG d;
    DIEMKHONGGIAN P;

    Nhap(d);

    // Nhập toa do điểm P
    cout << "Nhap toa do diem P: ";
    cin >> P.x >> P.y >> P.z;

    // Kiểm tra điểm P có thuộc đường thẳng d hay không
    int kq = ktThuoc(d, P);

    // Xuất kết quả
    if (kq)
        cout << "Diem P thuoc duong thang d" << endl;
    else
        cout << "Diem P khong thuoc duong thang d" << endl;

    return 0;
}
