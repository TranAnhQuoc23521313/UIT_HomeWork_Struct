#include <iostream>
#include<iomanip>
using namespace std;
struct phanso
{
	int TU, MAU;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO& a)
{
	cout << "\nNhap tu:";
	cin >> a.TU;
	cout << "Nhap mau:";
	cin >> a.MAU;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]";
		Nhap(a[i]);
	}
}
bool ktDuong(PHANSO k)
{
	if (k.TU <= 0||k.MAU<=0 ) return false;
	return true;
}
PHANSO duongdau(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktDuong(a[i]) == true) return a[i];
		
	}
	PHANSO lc = { 0,1 };
	return lc;
}
int main()
{
	PHANSO a[100],b;
	int n;
	Nhap(a, n);
	b = duongdau(a, n);
	cout << b.TU << "/" << b.MAU;
	return 0;
}