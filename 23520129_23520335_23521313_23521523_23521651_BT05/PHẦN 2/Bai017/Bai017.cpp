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
float KhoangCach(DIEM x, DIEM y)
{
	return sqrt((x.a) * (y.a) + (x.b) * (y.b));
}
int main()
{
	DIEM x,y;
	cout << "Nhap toa do diem A:";
	Nhap(x);
	cout << "Nhap toa do diem B:";
	Nhap(y);
	cout << "\nKhoang cach giua 2 diem: ";
	cout<<KhoangCach(x, y);
	return 0;
}