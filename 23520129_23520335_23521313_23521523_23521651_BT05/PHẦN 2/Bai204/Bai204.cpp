#include <iostream>

using namespace std;

struct Diem
{
    float x;
    float y;
};

typedef struct Diem DIEM;

struct DuongTron
{
    DIEM I;
    float R;
};

typedef struct DuongTron DUONGTRON;

float KhoangCachGoc(DIEM a) {
    return sqrt(a.x * a.x + a.y * a.y);
}

int ktQuaGoc(DUONGTRON c) {
    float kc = KhoangCachGoc(c.I);
    if (kc == c.R) {
        return 1;
    }
    return 0;
}

int ktTonTai(DUONGTRON a[], int n) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (ktQuaGoc(a[i]) == 1) {
            flag = 1;
            break;
        }
    }
    return flag;
}

float TinhDienTich(DUONGTRON a[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s += 3.14159 * a[i].R * a[i].R;
    }
    return s;
}

int main() {
    DUONGTRON a[100];
    int n;

    cout << "Nhập số đường tròn: ";
    cin >> n;

    cout << "Nhập các đường tròn: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "I[" << i << "]: ";
        cin >> a[i].I.x >> a[i].I.y;
        cout << "R[" << i << "]: ";
        cin >> a[i].R;
    }

    float s = TinhDienTich(a, n);

    cout << "Diện tích phần mặt phẳng bị phủ bởi 𝑛 đường tròn là: " << s << endl;

    return 0;
}
