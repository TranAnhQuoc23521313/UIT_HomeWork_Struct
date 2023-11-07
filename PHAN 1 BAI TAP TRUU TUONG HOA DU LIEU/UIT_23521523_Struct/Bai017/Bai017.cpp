#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct ThiSinh
{
	string MaSo;
	string HoTen;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
typedef struct ThiSinh THISINH;
void Nhap(THISINH&);
void Xuat(THISINH);
void XuLy(THISINH&);
void Nhap(THISINH[], int&);
void Xuat(THISINH[], int);
int ktDau(THISINH);
void LietKe(THISINH[], int);
void SapXep(THISINH[], int);
int main()
{
	THISINH b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	cout << "\nDanh sach cac thi sinh thi dau: ";
	LietKe(b, n);


	SapXep(b, n);
	cout << "\nDanh sach sau khi sap xep: ";
	Xuat(b, n);
	return 0;
}
void Nhap(THISINH& x)
{
	cout << "Nhap ma thi sinh: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten: ";
	getline(cin, x.HoTen);
	cout << "Nhap diem toan: ";
	cin >> x.Toan;
	cout << "Nhap diem ly: ";
	cin >> x.Ly;
	cout << "Nhap diem hoa: ";
	cin >> x.Hoa;
}
void Xuat(THISINH x)
{
	cout << "\nMa thi sinh: " << x.MaSo << endl;
	cout << "Ho ten: " << x.HoTen << endl;
	cout << setprecision(3);
	cout << "Diem toan: " << x.Toan << endl;
	cout << "Diem ly: " << x.Ly << endl;
	cout << "Diem hoa: " << x.Hoa << endl;
	cout << "Diem tong: " << x.Tong << endl;
}
void XuLy(THISINH& x)
{
	x.Tong = x.Toan + x.Ly + x.Hoa;
}
void Nhap(THISINH a[], int& n)
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

void Xuat(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThi sinh thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}
int ktDau(THISINH x)
{
	if (x.Tong <= 15)
		return 0;
	if (x.Toan == 0)
		return 0;
	if (x.Ly == 0)
		return 0;
	if (x.Hoa == 0)
		return 0;
	return 1;
}
void LietKe(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDau(a[i]))
			Xuat(a[i]);
}

void HoanVi(THISINH& a, THISINH& b)
{
	THISINH temp;
	temp = a;
	a = b;
	b = temp;
}
void SapXep(THISINH a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Tong < a[j].Tong)
				HoanVi(a[i], a[j]);
}
