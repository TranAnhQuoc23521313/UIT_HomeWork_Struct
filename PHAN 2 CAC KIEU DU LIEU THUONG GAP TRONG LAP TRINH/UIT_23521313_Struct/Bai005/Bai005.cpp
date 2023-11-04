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
void Xuat(HONSO);

int main()
{
	HONSO x;
	cout << "Nhap vao hon so X: " << endl;
	Nhap(x);
	cout << "Hon so vua nhap: ";
	Xuat(x);
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
	cout << "\nNguyen = " << x.Nguyen;
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}