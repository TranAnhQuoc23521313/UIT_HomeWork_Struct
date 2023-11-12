#include <iostream>
#include <iomanip>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO& x, PHANSO& y)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
	cout << "Nhap tu: ";
	cin >> y.Tu;
	cout << "Nhap mau: ";
	cin >> y.Mau;
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
int main()
{
	PHANSO m, n;
	Nhap(m, n);
	cout << SoSanh(m, n);
	return 0;
}