#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct HocSinh
{
	string MaSo;
	string HoTen;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
typedef struct HocSinh HOCSINH;
void Nhap(HOCSINH&);
void Xuat(HOCSINH);
void XuLy(HOCSINH&);
int main()
{
	HOCSINH hs;
	Nhap(hs);
	XuLy(hs);
	Xuat(hs);
	return 0;
}
void Nhap(HOCSINH & x)
{
	cout << "Nhap ma thi sinh: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, x.HoTen);
	cout << "Nhap diem toan: ";
	cin >> x.Toan;
	cout << "Nhap diem ly: ";
	cin >> x.Ly;
	cout << "Nhap diem hoa: ";
	cin >> x.Hoa;
}
void Xuat(HOCSINH x)
{
	cout << "\nMa thi sinh: " << x.MaSo << endl;
	cout << "Ho ten: " << x.HoTen << endl;
	cout << setprecision(3);
	cout << "Diem toan: " << x.Toan << endl;
	cout << "Diem ly: " << x.Ly << endl;
	cout << "Diem hoa: " << x.Hoa << endl;
	cout << "Diem tong: " << x.Tong << endl;
}
void XuLy(HOCSINH& x)
{
	x.Tong = x.Toan + x.Ly + x.Hoa;
}
