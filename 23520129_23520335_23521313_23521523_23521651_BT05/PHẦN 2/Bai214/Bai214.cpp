#include <iostream>

using namespace std;

struct Ngay
{
    int Ngay;
    int Thang;
    int Nam;
};

typedef struct Ngay NGAY;

void Nhap(NGAY a[], int& n) {
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap duong thang A[" << i << "]:\n";
        Nhap(a[i]);
    }
}

void Nhap(NGAY a) {
    cout << "Ngay: ";
    cin >> a.Ngay;
    cout << "Thang: ";
    cin >> a.Thang;
    cout << "Nam: ";
    cin >> a.Nam;
}

int main() {
    NGAY a[100];
    int n;

    Nhap(a, n);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: " << a[i].Ngay << "/" << a[i].Thang << "/" << a[i].Nam << endl;
    }

    return 0;
}
