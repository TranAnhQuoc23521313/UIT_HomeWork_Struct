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

struct DaiLy
{
	string MaSo;
	string TenDaiLy;
	int DienThoai;
	NGAY NgayNhan;
	string DiaChi;
	string EMail;
};
typedef struct DaiLy DAILY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(DAILY&);
void Xuat(DAILY);

int main()
{
	DAILY dl;
	Nhap(dl);
	Xuat(dl);
	return 0;
}

void Nhap(NGAY& x)
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

void Nhap(DAILY& x)
{
	cout << "Nhap ma so dai ly: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten dai ly: ";
	getline(cin, x.TenDaiLy);
	cout << "Nhap so dien thoai: ";
	cin >> x.DienThoai;
	cout << "Nhap ngay tiep nhan: ";
	Nhap(x.NgayNhan);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, x.DiaChi);
	cout << "Nhap E-Mail: ";
	getline(cin, x.EMail);
}

void Xuat(DAILY x)
{
	cout << "\nMa so dai ly: " << x.MaSo;
	cout << "\nTen dai ly: " << x.TenDaiLy;
	cout << "\nDien thoai: " << x.DienThoai;
	cout << "\nNgay tiep nhan: ";
	Xuat(x.NgayNhan);
	cout << "Dia chi: " << x.DiaChi;
	cout << "\nE-mail: " << x.EMail;
}