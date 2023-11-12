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
int main()
{
	TINH t;
	Nhap(t);
	Xuat(t);
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