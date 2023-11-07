#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MatHang
{
     string TenHang;
     int DonGia;
     int LuongTon;
};
typedef struct MatHang MATHANG;

void Nhap(MATHANG&);
void Xuat(MATHANG);

int main()
{
    MATHANG nv;
    Nhap(nv);
    Xuat(nv);
    return 0;

}

void Nhap(MATHANG& x)
{
    cout << "Nhap ten mat hang: ";
    getline(cin, x.TenHang);
    cout << "Nhap don gia: ";
    cin >> x.DonGia;
    cout << "Nhap so luong ton: ";
    cin >> x.LuongTon;
}

void Xuat(MATHANG x)
{
    cout << "\nTen mat hang: " << x.TenHang;
    cout << "\nDon gia: " << x.DonGia;
    cout << "\nSo luong ton: " << x.LuongTon;
}

