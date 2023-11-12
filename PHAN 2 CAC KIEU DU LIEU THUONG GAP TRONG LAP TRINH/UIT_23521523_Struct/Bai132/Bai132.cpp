#include<iostream>
using namespace std;

struct diemkhonggian
{
	float x, y, z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKHONGGIAN& c)
{
	cout << "\nNhap x:";
	cin >> c.x;
	cout << "Nhap y:";
	cin >> c.y;
	cout << "Nhap z:";
	cin >> c.z;
}
void Nhap(HINHCAU& c)
{
	cout << "Nhap toa do tam:";
	Nhap(c.I);
	cout << "Nhap ban kinh:";
	cin >> c.R;
}
float thetich(HINHCAU c)
{
	return float((float)4 / 3 * 3.14 * c.R * c.R * c.R);
}
int main()
{
	HINHCAU a;
	Nhap(a);
	cout << thetich(a);
	return 0;
}