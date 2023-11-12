#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct ChuyenBay
{
	string MaSo;
	NGAY NgayBay;
	THOIGIAN GioBay;
	string NoiDi;
	string NoiDen;
};
typedef struct ChuyenBay CHUYENBAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);

void Nhap(CHUYENBAY[], int&);
void Xuat(CHUYENBAY[], int);

int SoSanh(NGAY, NGAY);
int TanSuat(CHUYENBAY[], int, NGAY);
NGAY TimNgay(CHUYENBAY[], int);
int TimChuyenBay(CHUYENBAY[], int, string);

int main()
{
	CHUYENBAY b[100];
	int n;

	Nhap(b, n);
	Xuat(b, n);

	NGAY Ng = TimNgay(b, n);
	cout << "\nNgay co nhieu chuyen bay nhat: ";
	Xuat(Ng);

	string MaChuyenBay;
	cout << "\nNhap ma chuyen bay can tim: ";
	getline(cin, MaChuyenBay);

	int kq = TimChuyenBay(b, n, MaChuyenBay);
	if (kq == -1)
		cout << "\nKhong tim thay";
	else
	{
		cout << "\nChuyen bay can tim: ";
		Xuat(b[kq]);
	}
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

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio:";
	cin >> x.Gio;
	cout << "Nhap phut:";
	cin >> x.Phut;
	cout << "Nhap giay:";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay << endl;
}

void Nhap(CHUYENBAY& x)
{
	cout << "Nhap ma chuyen bay: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ngay bay: ";
	Nhap(x.NgayBay);
	cout << "Nhap gio bay: ";
	Nhap(x.GioBay);
	cout << "Nhap noi di: ";
	cin.ignore();
	getline(cin, x.NoiDi);
	cout << "Nhap noi den: ";
	getline(cin, x.NoiDen);
}

void Xuat(CHUYENBAY x)
{
	cout << "\nMa chuyen bay: " << x.MaSo << endl;
	cout << "Ngay bay: ";
	Xuat(x.NgayBay);
	cout << "Gio bay: ";
	Xuat(x.GioBay);
	cout << "Noi di: " << x.NoiDi << endl;
	cout << "Noi den: " << x.NoiDen << endl;
}

void Nhap(CHUYENBAY a[], int& n)
{
	cout << "\nNhap so luong chuyen bay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nChuyen bay thu " << i + 1 <<":";
			Nhap(a[i]);
	}
}

void Xuat(CHUYENBAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nChuyen bay thu " << i + 1 <<
			":";
		Xuat(a[i]);
	}
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}

int TanSuat(CHUYENBAY a[], int n, NGAY x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i].NgayBay, x) == 0)
			dem = dem + 1;
	return dem;
}

NGAY TimNgay(CHUYENBAY a[], int n)
{
	NGAY lc = a[0].NgayBay;
	for (int i = 0; i < n; i++)
	{
		int x = TanSuat(a, n, a[i].NgayBay);
		int y = TanSuat(a, n, lc);
		if (x > y)
			lc = a[i].NgayBay;
	}
	return lc;
}

int TimChuyenBay(CHUYENBAY a[], int n, string x)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == x)
			return i;
	return -1;
}
