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
int main()
{
	CAUTHU ct;
	Nhap(ct);
	Xuat(ct);
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
void Nhap(CAUTHU& x)
{
	cout << "Nhap ma cau thu: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten cau thu: ";
	getline(cin >> ws, x.HoTen);
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