#include <iostream>

using namespace std;

struct ThoiGian
{
    int Gio;
    int Phut;
    int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
int KtHopLe(THOIGIAN);

int main()
{
    THOIGIAN time;
    cout << "Nhap vao thoi gian: " << endl;
    Nhap(time);
    if (KtHopLe(time) == 1)
        cout << "Thoi gian hop le";
    else
        cout << "Thoi gian khong hop le";
    return 0;
}

void Nhap(THOIGIAN& x)
{
    cout << "Nhap gio: ";
    cin >> x.Gio;
    cout << "Nhap phut: ";
    cin >> x.Phut;
    cout << "Nhap giay: ";
    cin >> x.Giay;
}

int KtHopLe(THOIGIAN x)
{
    if (!(0 <= x.Gio && x.Gio <= 23))
        return 0;
    if (!(0 <= x.Phut && x.Phut <= 59))
        return 0;
    if (!(0 <= x.Giay && x.Giay <= 59))
        return 0;
    return 1;
}