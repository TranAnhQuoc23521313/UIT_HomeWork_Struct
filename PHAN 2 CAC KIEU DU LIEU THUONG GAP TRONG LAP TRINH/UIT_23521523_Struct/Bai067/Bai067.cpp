#include<iostream>
#include<cmath>
using namespace std;
struct SoPhuc
{
	int a,b;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC& k)
{
	cout << "\nNhap phan thuc:";
	cin >> k.a;
	cout << "Nhap phan ao:";
	cin >> k.b;
}

SOPHUC operator- (SOPHUC z1, SOPHUC z2)
{
	SOPHUC temp;
	temp.a = z1.a - z2.a;
	temp.b = z1.b - z2.b;
	return temp;
}
int main()
{
	SOPHUC z1,z2,z3;
	cout << "Nhap so phuc z1:";
	Nhap(z1);
	cout << "Nhap so phuc z2:";
	Nhap(z2);
	return 0;
}