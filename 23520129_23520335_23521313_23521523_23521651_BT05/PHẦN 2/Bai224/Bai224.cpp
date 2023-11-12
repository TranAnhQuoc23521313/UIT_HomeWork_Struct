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

float KhoangCach(DIEM a, DIEM b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int ktThuoc(DUONGTRON c, DIEM P) {
    float kc = KhoangCach(c.I, P);
    if (kc <= c.R) {
        return 1;
    }
    return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (ktThuoc(c, a[i][j])) {
                dem++;
            }
        }
    }
    return dem;
}

int main() {
    DIEM a[100][100];
    int m, n;

    cout << "Nhập số dòng của ma trận: ";
    cin >> m;

    cout << "Nhập số cột của ma trận: ";
    cin >> n;

    cout << "Nhập các điểm của ma trận: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j].x >> a[i][j].y;
        }
    }

    DUONGTRON c;
    cout << "Nhập tâm và bán kính của đường tròn: ";
    cin >> c.I.x >> c.I.y >> c.R;

    int dem = DemDiem(a, m, n, c);

    cout << "Số lượng điểm nằm trong đường tròn là: " << dem << endl;

    return 0;
}
