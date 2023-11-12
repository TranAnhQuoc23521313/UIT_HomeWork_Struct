#include<iostream>
using namespace std;
struct Diem
{
	float a, b;
};
typedef struct Diem DIEM;

void Nhap(DIEM& k)
{
	cout << "\nNhap x:";
	cin >> k.a;
	cout << "Nhap y:";
	cin >> k.b;
}
int Ktra(DIEM k)
{
	if (k.a > 0 && k.b > 0) return 1;
	return 0;
}

int main()
{
	DIEM x;
	cout << "Nhap toa do diem A:";
	Nhap(x);
	if (Ktra(x) == 1) cout << "A thuoc phan tu thu I";
	else cout << "A khong thuoc phan tu thu I";
	return 0;
}