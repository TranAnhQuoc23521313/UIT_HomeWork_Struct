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
struct HopSua {
	string NhanHieu;
	float TrongLuong; 
	NGAY HanDung;
}; 
typedef struct HopSua HOPSUA;
void Nhap(NGAY&); 
void Xuat(NGAY);
void Nhap(HOPSUA&); 
void Xuat(HOPSUA);
void Nhap(HOPSUA[], int&); 
void Xuat(HOPSUA[], int);
int SoSanh(NGAY, NGAY);
int DemQuaHan(HOPSUA[], int, NGAY);
HOPSUA LonNhat(HOPSUA[], int);
int main()
{
	HOPSUA b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	NGAY x;
	cout << "\nNhap ngay x:";
	Nhap(x);
	int kq = DemQuaHan(b, n, x);
	cout << "\nSo luong hop sua qua han su dung: ";
	HOPSUA ln;
	ln = LonNhat(b, n);
	Xuat(ln);
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
void Nhap(HOPSUA& x)
{
	cout << "Nhap nhan hieu: ";
	cin.ignore();
	getline(cin, x.NhanHieu);
	cout << "Nhap trong luong: ";
	cin >> x.TrongLuong;
	cout << "Nhap han su dung: ";
	Nhap(x.HanDung);
}
void Xuat(HOPSUA x)
{
	cout << "\nNhan hieu: " << x.NhanHieu << endl;
	cout << "Trong luong: " << x.TrongLuong << endl;
	cout << "Han su dung: ";
	Xuat(x.HanDung);
}
void Nhap(HOPSUA a[], int& n)
{
	cout << "\nNhap so luong hop sua: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nHop sua thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}
void Xuat(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nHop sua thu " << i + 1 << ":\n";
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
int DemQuaHan(HOPSUA a[], int n, NGAY x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i].HanDung, x) == -1)
			dem = dem + 1;
	}
	return dem;
}
HOPSUA LonNhat(HOPSUA a[], int n)
{
	HOPSUA lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].TrongLuong > lc.TrongLuong)
			lc = a[i];
	}
	return lc;
}