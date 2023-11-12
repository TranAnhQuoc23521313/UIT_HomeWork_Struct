#include <iostream>
using namespace std;
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC& f, DONTHUC& g)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
	cout << "Nhap he so: ";
	cin >> g.a;
	cout << "Nhap so mu: ";
	cin >> g.n;
}  
DONTHUC Thuong(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}
void Xuat(DONTHUC f, DONTHUC g)
{
	cout << "Thuong cua hai don thuc la: ";
	DONTHUC thuong = Thuong(f, g);
	cout << thuong.a << "/" << thuong.n;
}
int main()
{
	DONTHUC x,y;
	Nhap(x,y);
	Thuong(x, y);
	Xuat(x, y);
	return 0;
}