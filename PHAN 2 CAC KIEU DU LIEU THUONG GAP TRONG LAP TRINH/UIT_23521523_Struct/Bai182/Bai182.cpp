#include <iostream>
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

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a,n);
	return 0;
}