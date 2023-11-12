#include<iostream>
#include<cmath>
using namespace std;
struct Ngay
{
	int ng, th, n;
};
typedef struct Ngay NGAY;

void Nhap(NGAY& k)
{
	cout << "\nNhap ngay:";
	cin >> k.ng;
	cout << "Nhap thang:";
	cin >> k.th;
	cout << "Nhap nam:";
	cin >> k.n;
}
int ktNhuan(NGAY x)
{
	if (x.n % 4 == 0 && x.n % 100 != 0) return 1;
	if (x.n % 400 == 0) return 1;
	return 0;
}
int songaytoidatrongthang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int ktra(NGAY x)
{
	if (x.n < 1) return 0;
	if (x.th < 1) return 0;
	if (x.th > 12) return 0;
	if (x.ng < 1)return 0;;
	if (x.ng > songaytoidatrongthang(x)) return 0;
	return 1;
}
int sothututrongnam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.n };
	}
	return { stt + x.ng };
}
int songaytoidatrongnam(NGAY x)
{
	if (ktNhuan(x) == 1)
	{
		return 366;
	}
	return 365;
}
int sothutu(NGAY x) {
	int stt = 0;
	for (int i = 0; i < x.n - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + songaytoidatrongnam(temp);
	}
	return (stt + sothututrongnam(x));
}
int KhoangCach(NGAY x, NGAY y)
{
	int a = sothutu(x);
	int b = sothutu(y);
	return abs(a - b);
}
int main()
{
	NGAY a,b;
	Nhap(a);
	Nhap(b);
	cout<<KhoangCach(a, b);
	return 0;
}