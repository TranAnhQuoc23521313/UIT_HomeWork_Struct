#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);

int main()
{
	PHANSO A;
	cout << "Nhap vao Phan so A: " << endl;
	Nhap(A);
	cout << "Phan so A: " << endl;
	cout << "Tu = " << A.Tu << endl;
	cout << "Mau = " << A.Mau;
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}