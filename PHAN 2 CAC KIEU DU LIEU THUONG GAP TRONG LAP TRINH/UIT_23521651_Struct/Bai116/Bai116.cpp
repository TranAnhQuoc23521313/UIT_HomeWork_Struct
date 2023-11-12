#include<iostream>
#include <cmath>
using namespace std;
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC ff;
	float x;
	Nhap(ff);
	cout << "Nhap x0: ";
	cin >> x;
	cout << "Gia tri don thuc tai x = x0: " << TinhGiaTri(ff, x);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
		T = T * x;
	T = T * f.a;
	return T;
}
