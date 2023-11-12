#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct LuanVan
{
	string MaSo;
	string TenLuanVan;
	string HoTenSV;
	string HoTenGV;
	int Nam;
};
typedef struct LuanVan LUANVAN;

void Nhap(LUANVAN&);
void Xuat(LUANVAN);

int main()
{
	LUANVAN lv;
	Nhap(lv);
	Xuat(lv);
	return 0;
}

void Nhap(LUANVAN& x)
{
	cout << "Nhap ma luan van: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten luan van: ";
	getline(cin, x.TenLuanVan);
	cout << "Nhap ten sinh vien: ";
	getline(cin, x.HoTenSV);
	cout << "Nhap ten giao vien: ";
	getline(cin, x.HoTenGV);
	cout << "Nhap nam thuc hien: ";
	cin >> x.Nam;
}

void Xuat(LUANVAN x)
{
	cout << "\nMa luan van: " << x.MaSo;
	cout << endl;
	cout << "Ten luan van: " << x.TenLuanVan;
	cout << endl;
	cout << "Ten sinh vien: " << x.HoTenSV;
	cout << endl;
	cout << "Ten giao vien: " << x.HoTenGV;
	cout << endl;
	cout << "Nam thuc hien: " << x.Nam;
	cout << endl;
}