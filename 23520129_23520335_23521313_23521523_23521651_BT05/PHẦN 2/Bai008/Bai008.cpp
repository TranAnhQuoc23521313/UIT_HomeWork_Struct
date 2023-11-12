#include <iostream>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;
void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC& f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}
int main()
{
	DONTHUC g;
	Nhap(g);
	cout << "\nDon thuc vua nhap: ";
	Xuat(g);
	return 0;
}