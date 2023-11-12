#include <iostream>
using namespace std;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG& d1, DUONGTHANG& d2)
{
	cout << "Nhap a: ";
	cin >> d1.a;
	cout << "Nhap b: ";
	cin >> d1.b;
	cout << "Nhap c: ";
	cin >> d1.c;
	cout << "Nhap a: ";
	cin >> d2.a;
	cout << "Nhap b: ";
	cin >> d2.b;
	cout << "Nhap c: ";
	cin >> d2.c;
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}
int main()
{
	DUONGTHANG d1, d2;
	Nhap(d1, d2);
	cout << ktCat(d1, d2);
}