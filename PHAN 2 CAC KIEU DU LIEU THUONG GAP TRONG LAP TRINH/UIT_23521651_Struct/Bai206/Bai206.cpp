#include <iostream>
#include<iomanip>
using namespace std;
struct DuongThang 
{ 
	float a; 
	float b; 
	float c; 
};
typedef struct DuongThang DUONGTHANG;
void Nhap(DUONGTHANG&); 
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG dt[100];
	int n;
	Nhap(dt, n);
	return 0;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}
void Xuat(DUONGTHANG l)
{
	cout << setprecision(3);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}