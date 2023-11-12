#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef struct Tinh TINH;

void Nhap(TINH&);
void Xuat(TINH);

void Nhap(TINH[], int& n);
void Xuat(TINH[], int);

int main()
{
	TINH b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	return 0;
}

void Nhap(TINH& x)
{
	cout << "Nhap ma tinh: ";
	cin >> x.MaSo;
	cout << "Nhap ten tinh: ";
	cin.ignore();
	getline(cin, x.TenTinh);
	cout << "Nhap dan so: ";
	cin >> x.DanSo;
	cout << "Nhap dien tich: ";
	cin >> x.DienTich;
}

void Xuat(TINH x)
{
	cout << "Ma tinh: " << x.MaSo << endl;
	cout << "Ten tinh: " << x.TenTinh << endl;
	cout << "Dan so: " << x.DanSo << endl;
	cout << "Dien tich: " << x.DienTich << endl;
}

void Nhap(TINH a[], int& n)
{
	cout << "\nNhap so luong tinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap tinh thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}

void Xuat(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nTinh thu " << i + 1 << ":\n";
		Xuat(a[i]);
	}
}