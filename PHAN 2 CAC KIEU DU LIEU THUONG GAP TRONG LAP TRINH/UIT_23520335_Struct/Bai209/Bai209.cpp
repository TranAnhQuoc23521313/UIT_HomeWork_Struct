#include <iostream>

using namespace std;

struct DuongThang
{
    float a;
    float b;
    float c;
};

typedef struct DuongThang DUONGTHANG;

int ktSongSong(DUONGTHANG a, DUONGTHANG b) {
    return (a.a * b.b - b.a * a.b) == 0;
}

int ktCapSongSong(DUONGTHANG a[], int n) {
    int flag = 0;
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            if (ktSongSong(a[i], a[j])) {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}

int main() {
    DUONGTHANG a[100];
    int n;

    cout << "Nhập số đường thẳng: ";
    cin >> n;

    cout << "Nhập các đường thẳng: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i].a >> a[i].b >> a[i].c;
    }

    int flag = ktCapSongSong(a, n);

    if (flag == 1) {
        cout << "Có ít nhất một cặp đường thẳng song song." << endl;
    }
    else {
        cout << "Không có cặp đường thẳng song song nào." << endl;
    }

    return 0;
}
