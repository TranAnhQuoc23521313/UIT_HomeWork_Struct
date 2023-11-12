#include<iostream>
#include<iomanip>
using namespace std;
struct sophuc
{ 
	float Thuc; 
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&); 
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}