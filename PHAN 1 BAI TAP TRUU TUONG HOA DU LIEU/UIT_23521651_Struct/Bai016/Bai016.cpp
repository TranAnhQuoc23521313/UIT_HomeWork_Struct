#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct NhanVien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct NhanVien NHANVIEN;
void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);
void Nhap(NHANVIEN[], int&);
void Xuat(NHANVIEN[], int);
float LuongCaoNhat(NHANVIEN[], int);
int TimNhanVien(NHANVIEN[], int);
float TongLuong(NHANVIEN[], int);
void HoanVi(NHANVIEN&, NHANVIEN&);
void SapXep(NHANVIEN[], int);
int main()
{
	NHANVIEN b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	int kq = TimNhanVien(b, n);
	if (kq == -1)
		cout << "\nKhong tim thay";
	else
	{
		cout << "\nNhan vien can tim: ";
		Xuat(b[kq]);
	}
	float tong = TongLuong(b, n);
	cout << "\nTong luong: " << tong;
	SapXep(b, n);
	cout << "\nMang sau khi da sap xep:";
	Xuat(b, n);
	return 0;
}
void Nhap(NHANVIEN& x)
{
	cout << "Nhap ma so nhan vien: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin >> ws, x.HoTen);
	cout << "Nhap luong nhan vien: ";
	cin >> x.Luong;
}
void Xuat(NHANVIEN x)
{
	cout << "\nMa nhan vien: " << x.MaSo;
	cout << "\nHo ten: " << x.HoTen;
	cout << setprecision(5);
	cout << "\nLuong: " << x.Luong << endl;
}
void Nhap(NHANVIEN a[], int& n)
{
	cout << "\nNhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}
void Xuat(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}
float LuongCaoNhat(NHANVIEN a[], int n)
{
	float lc = a[0].Luong;
	for (int i = 0; i < n; i++)
		if (lc < a[i].Luong)
			lc = a[i].Luong;
	return lc;
}
int TimNhanVien(NHANVIEN a[], int n)
{
	if (n == 0)
		return -1;
	float ln = LuongCaoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (ln == a[i].Luong)
			return i;
	return -1;
}
float TongLuong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + a[i].Luong;
	return s;
}
void HoanVi(NHANVIEN& a, NHANVIEN& b)
{
	NHANVIEN temp;
	temp = a;
	a = b;
	b = temp;
}
void SapXep(NHANVIEN a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Luong > a[j].Luong)
				HoanVi(a[i], a[j]);
}