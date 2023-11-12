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

void Nhap(DAILY[], int&);
void Xuat(DAILY[], int);
int TimDaiLy(DAILY[], int, string);

int main()
{
	DAILY b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	
		string TenDaiLy;
	cout << "\nNhap ten dai ly can tim: ";
	getline(cin, TenDaiLy);
	
	int kq = TimDaiLy(b, n, TenDaiLy);
	if (kq == -1)
		cout << "\nKhong tim thay";
	else
		{
		cout << "\nDai ly can tim: ";
		Xuat(b[kq]);
		}
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

void Nhap(DAILY & x)
{
	cout << "Nhap ma so dai ly: ";
	cin.ignore();
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
	cout << "\nSo dien thoai: " << x.DienThoai;
	cout << "\nNgay tiep nhan: ";
	Xuat(x.NgayNhan);
	cout << "Dia chi: " << x.DiaChi;
	cout << "\nE-mail: " << x.EMail;
	}

void Nhap(DAILY a[], int& n)
{
	cout << "\nNhap so luong dai ly: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nDai ly thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}

void Xuat(DAILY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDai ly thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}

int TimDaiLy(DAILY a[], int n, string x)
{
	for (int i = 0; i < n; i++)
		if (a[i].TenDaiLy == x)
			return i;
	return -1;
	}
