#include<iostream>
using namespace std;
struct Day
{
	int Ngay, Thang, Nam;
};
typedef struct Day DAY;

void Nhap(DAY& x)
{
	cout << "Nhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}
void Xuat(DAY x)
{
	cout << "Ngay vua nhap la:" << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}
int main()
{
	DAY x;
	Nhap(x);
	Xuat(x);
	return 0;
}