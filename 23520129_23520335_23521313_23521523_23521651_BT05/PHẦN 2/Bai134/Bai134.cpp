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

// Khai báo kiểu dữ liệu biểu diễn hình cầu
struct hinhcau
{
    DIEMKHONGGIAN I;
    float R;
};

typedef struct hinhcau HINHCAU;

// Hàm nhập hình cầu
void Nhap(HINHCAU& c)
{
    cout << "Nhap tam:\n";
    Nhap(c.I);

    cout << "Nhap ban kinh: ";
    cin >> c.R;
}

// Hàm nhập điểm
void Nhap(DIEMKHONGGIAN& x) {
    cout << "Nhap toa do x: ";
    cin >> x.x;

    cout << "Nhap toa do y: ";
    cin >> x.y;

    cout << "Nhap toa do z: ";
    cin >> x.z;
}

// Hàm tính khoảng cách giữa hai điểm
float KhoangCach(DIEMKHONGGIAN P1, DIEMKHONGGIAN P2) {
    return sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y) + (P1.z - P2.z) * (P1.z - P2.z));
}

// Hàm xét vị trí tương đối giữa hai hình cầu
int TuongDoi(HINHCAU c1, HINHCAU c2)
{
    float kc = KhoangCach(c1.I, c2.I);

    if (kc == 0 && c1.R == c2.R) {
        return 0; // Trùng nhau
    }
    else if (kc > (c1.R + c2.R)) {
        return 1; // Rời nhau
    }
    else if (kc == (c1.R + c2.R)) {
        return 2; // Tiếp xúc ngoài
    }
    else if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R)) {
        return 3; // Cắt nhau
    }
    else if (kc == abs(c1.R - c2.R)) {
        return 4; // Tiếp xúc trong
    }
    else {
        return 5; // Chứa trong nhau
    }
}

// Hàm main
int main() {
    HINHCAU c1, c2;

    Nhap(c1);
    Nhap(c2);

    // Xét vị trí tương đối giữa hai hình cầu
    int kq = TuongDoi(c1, c2);

    switch (kq) {
    case 0:
        cout << "Hai hình cầu trùng nhau" << endl;
        break;
    case 1:
        cout << "Hai hình cầu rời nhau" << endl;
        break;
    case 2:
        cout << "Hai hình cầu tiếp xúc ngoài" << endl;
        break;
    case 3:
        cout << "Hai hình cầu cắt nhau" << endl;
        break;
    case 4:
        cout << "Hai hình cầu tiếp xúc trong" << endl;
        break;
    case 5:
        cout << "Hai hình cầu chứa trong nhau" << endl;
        break;
    }

    return 0;
}
