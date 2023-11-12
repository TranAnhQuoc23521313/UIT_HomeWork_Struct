#include <iostream>
#include <iomanip>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;

};
typedef struct sophuc SOPHUC; 
void Nhap(SOPHUC& x, SOPHUC& y)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
	cout << "Nhap phan thuc: ";
	cin >> y.Thuc;
	cout << "Nhap phan ao: ";
	cin >> y.Ao;
}
SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}
void Xuat(SOPHUC x, SOPHUC y)
{
	cout << "Tich cua hai so phuc la: ";
	SOPHUC tich = Tich(x, y);
	cout << tich.Thuc << " + " << tich.Ao << "i";
}
int main()
{
	SOPHUC x, y;
	Nhap(x, y);
	Xuat(x, y);
	return 0;
}
