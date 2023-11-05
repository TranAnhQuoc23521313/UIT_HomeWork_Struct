#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Xuat(SOPHUC);

int main()
{
	SOPHUC z;
	cout << "Nhap phan thuc: ";
	cin >> z.Thuc;
	cout << "Nhap phan ao: ";
	cin >> z.Ao;
	cout << "So phuc Z co: ";
	Xuat(z);
	return 0;
}

void Nhap(SOPHUC& x)
{
	
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc = " << x.Thuc;
	cout << "\nPhan ao = " << x.Ao;
	//	cout << "\nZ = " << x.Thuc << " + " << x.Ao << "i";
}