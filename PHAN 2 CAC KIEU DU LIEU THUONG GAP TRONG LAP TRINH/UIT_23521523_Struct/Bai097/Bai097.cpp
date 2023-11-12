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
	if (ktNhuan(x)==1)
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int ktra(NGAY x)
{
	if (x.n < 1) return 0;
	if (x.th < 1) return 0;
	if(x.th>12) return 0;
	if (x.ng < 1)return 0;;
	if (x.ng > songaytoidatrongthang(x)) return 0;
	return 1;
}
int main()
{
	NGAY a;
	Nhap(a);
	if (ktra(a) == 1) cout << "yes";
	else cout << "no";
	return 0;
}