#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct HocSinh
{
	string HoTen;
	int Toan;
	int Van;
	float DiemTrungBinh;
};
typedef struct HocSinh HOCSINH;
void Nhap(HOCSINH&);
void Xuat(HOCSINH);
void XuLy(HOCSINH&);
void Nhap(HOCSINH[], int&);
void Xuat(HOCSINH[], int);
int ktGioi(HOCSINH);
int DemHocSinh(HOCSINH[], int);
int main()
{
	HOCSINH b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	int kq = DemHocSinh(b, n);
	cout << "\nSo luong hoc sinh gioi: " << kq;
	return 0;
}
void Nhap(HOCSINH & x)
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, x.HoTen);
	cout << "Nhap diem toan: ";
	cin >> x.Toan;
	cout << "Nhap diem van: ";
	cin >> x.Van;
}
void Xuat(HOCSINH x)
{
	cout << "Ho ten: " << x.HoTen << endl;
	cout << "Diem toan: " << x.Toan << endl;
	cout << "Diem van: " << x.Van << endl;
	cout << "Diem trung binh: ";
	cout << x.DiemTrungBinh << endl;
}
void XuLy(HOCSINH & x)
{
	x.DiemTrungBinh = (float)(x.Toan + x.Van) / 2;
}
void Nhap(HOCSINH a[], int& n)
{
	cout << "\nNhap so luong thi sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		{
			cout << "\nThi sinh thu " << i + 1 << ":\n";
			Nhap(a[i]);
			XuLy(a[i]);
		}
}
void Xuat(HOCSINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThi sinh thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}
int ktGioi(HOCSINH x)
{
	if (x.Toan <= 8)
		return 0;
	if (x.Van <= 8)
		return 0;
	return 1;
}
int DemHocSinh(HOCSINH a[], int n)
{
	int dem = 0;
		for (int i = 0; i < n; i++)
			if (ktGioi(a[i]))
				dem = dem + 1;
	return dem;
}