#include <iostream>
#include <cmath>

using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
int KtVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap vao duong thang d1: " << endl;
	Nhap(d1);
	cout << "Nhap vao duong thand d2: " << endl;
	Nhap(d2);
	if (KtVuongGoc(d1, d2) == 1)
		cout << "d1 va d2 vuong goc voi nhau";
	else
		cout << "d1 va d2 khong vuong goc voi nhau";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

int KtVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;  // d1 va d2 vuong goc voi nhau
	return 0;  // d1 va d2 khong vuong goc voi nhau
}