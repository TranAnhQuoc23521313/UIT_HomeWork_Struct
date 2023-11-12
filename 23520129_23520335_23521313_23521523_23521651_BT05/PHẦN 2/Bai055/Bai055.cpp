#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int KtAm(PHANSO);

int main()
{
	PHANSO x;
	cout << "Nhap phan so X: " << endl;
	Nhap(x);
	if (KtAm(x) == 1)
		cout << "Phan so nay am";
	else
		cout << "Phan so nay khong am";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

int KtAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
}