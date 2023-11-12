#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;
struct SoTietKiem
{
	string MaSo;
	string Loai;
	string HoTen;
	int CMND;
	NGAY NgayMo;
	float TienGoi;
};
typedef struct SoTietKiem SOTIETKIEM;
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(SOTIETKIEM&);
void Xuat(SOTIETKIEM);
int main()
{
	SOTIETKIEM stk;
	Nhap(stk);
	Xuat(stk);
	return 0;
}
void Nhap(NGAY & x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}
void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}
void Nhap(SOTIETKIEM & x)
{
	cout << "Nhap ma so tiet kiem: ";
	getline(cin, x.MaSo);
	cout << "Nhap loai tiet kiem: ";
	getline(cin, x.Loai);
	cout << "Nhap ho ten khach hang: ";
	getline(cin, x.HoTen);
	cout << "Nhap so chung minh nhan dan: ";
	cin >> x.CMND;
	cout << "Nhap ngay mo so: ";
	Nhap(x.NgayMo);
	cout << "Nhap so tien goi: ";
	cin >> x.TienGoi;
}

void Xuat(SOTIETKIEM x)
{
	cout << "\nMa so tiet kiem: " << x.MaSo;
	cout << "\nLoai tiet kiem: " << x.Loai;
	cout << "\nHo ten KH: " << x.HoTen;
	cout << "\CMND: " << x.CMND;
	cout << "\nNgay mo so: ";
	Xuat(x.NgayMo);
	cout << "So tien goi: ";
	cout << setprecision(5) << x.TienGoi;
}