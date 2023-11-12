#include<iostream>
#include<cmath>
using namespace std;
struct Ngay
{
	int ng,th,n;
};
typedef struct Ngay NGAY;

void Nhap(NGAY& k)
{
	cout << "\nNhap ngay:";
	cin >> k.ng;
	cout << "Nhap thang:";
	cin >> k.th;
	cout << "Nhap nam:";
	cin >> k.n;
}

int main()
{
	NGAY a;
	Nhap(a);
	return 0;
}