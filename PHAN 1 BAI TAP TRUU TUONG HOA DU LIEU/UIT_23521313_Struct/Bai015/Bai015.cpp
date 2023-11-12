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

struct CauThu
{
	string MaSo;
	string HoTen;
	NGAY NgaySinh;
};
typedef struct CauThu CAUTHU;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(CAUTHU&);
void Xuat(CAUTHU);

void Nhap(CAUTHU[], int&);
void Xuat(CAUTHU[], int);

int NamLonNhat(CAUTHU[], int);
void LietKe(CAUTHU[], int);

int SOSanh(NGAY, NGAY);
void HoanVi(CAUTHU&, CAUTHU&);
void SapXep(CAUTHU[], int);

int main()
{
	CAUTHU b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);

	cout << "\nCac cau thu nho tuoi nhat: ";
	LietKe(b, n);

	SapXep(b, n);
	cout << "\nDanh sach sau khi sap xep: ";
	Xuat(b, n);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "\nNhap thang: ";
	cin >> x.Thang;
	cout << "\nNhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

void Nhap(CAUTHU& x)
{
	cout << "Nhap ma cau thu: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ten cau thu: ";
	getline(cin, x.HoTen);
	cout << "Nhap ngay sinh: ";
	Nhap(x.NgaySinh);
}

void Xuat(CAUTHU x)
{
	cout << "\nMa cau thu: " << x.MaSo << endl;
	cout << "Ten cau thu: " << x.HoTen << endl;
	cout << "Ngay sinh: ";
	Xuat(x.NgaySinh);
}

void Nhap(CAUTHU a[], int& n)
{
	cout << "\nNhap so luong cau thu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nCau thu thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}

void Xuat(CAUTHU a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nCau thu thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}

int NamLonNhat(CAUTHU a[], int n)
{
	int lc = a[0].NgaySinh.Nam;
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam > lc)
			lc = a[i].NgaySinh.Nam;
	return lc;
 }

void LietKe(CAUTHU a[], int n)
{
	int ln = NamLonNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam == ln)
			Xuat(a[i]);
}

void HoanVi(CAUTHU& a, CAUTHU& b)
{
	CAUTHU temp = a;
	a = b;
	b = temp;
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

void SapXep(CAUTHU a[], int n)
{
	for (int i =0; i < n;i++)
		for (int j = 0; j < n; j++)
		{
			NGAY x = a[i].NgaySinh;
			NGAY y = a[j].NgaySinh;
			if (SoSanh(x, y) == -1)
				HoanVi(a[i], a[j]);
		}
}