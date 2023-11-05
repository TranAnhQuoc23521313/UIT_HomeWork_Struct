#include <iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void QuiDongMau(HONSO&, HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO x, y;
	cout << "Nhap vao hon so X: " << endl;
	Nhap(x);
	cout << "Nhap vao hon so Y: " << endl;
	Nhap(y);
	QuiDongMau(x, y);
	cout << "Hon so sau khi qui dong mau: " << endl;
	cout << "X = ";
	Xuat(x);
	cout << "\nY = ";
	Xuat(y);
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	//	cout << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")";
	cout << "\nNguyen = " << x.Nguyen;
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

void QuiDongMau(HONSO& x, HONSO& y)
{
	int bc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = bc;
	y.Mau = bc;
}