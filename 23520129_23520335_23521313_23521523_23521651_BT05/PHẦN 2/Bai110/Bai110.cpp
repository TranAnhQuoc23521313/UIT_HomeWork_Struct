#include <iostream>

using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);

int main()
{
	DONTHUC f_x;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f_x);
	cout << "Don thuc f(x): " << endl;
	cout << "\nHe so: " << f_x.a;
	cout << "\nSo mu: " << f_x.n;
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
