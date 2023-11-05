#include <iostream>

using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&, int&);
DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHam(DONTHUC, int);
void Xuat(DONTHUC);

int main()
{
	DONTHUC f;
	int k;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f, k);
	cout << "Dao ham cap 1 cua f(x) la ";
	DONTHUC f_1 = DaoHam(f, k);
	Xuat(f_1);
	return 0;
}

void Nhap(DONTHUC& f, int& k)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
	cout << "Nhap K: ";
	cin >> k;
}

DONTHUC DaoHam(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}

DONTHUC DaoHam(DONTHUC f)
{
	if (f.n == 0)
	{
		DONTHUC temp = { 0,0 };
		return temp;
	}
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}