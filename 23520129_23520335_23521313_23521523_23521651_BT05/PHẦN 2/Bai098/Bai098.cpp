#include <iostream>
using namespace std;
struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY& x, NGAY& y)
{
	cout << "Nhap ngay thu nhat: ";
	cin >> x.ng;
	cout << "Nhap thang thu nhat: ";
	cin >> x.th;
	cout << "Nhap nam thu nhat: ";
	cin >> x.nm;
	cout << "Nhap ngay thu hai: ";
	cin >> y.ng;
	cout << "Nhap thang thu hai: ";
	cin >> y.th;
	cout << "Nhap nam thu hai: ";
	cin >> y.nm;
}
int SoSanh(NGAY x, NGAY y)
{
	if (x.nm > y.nm)
		return 1;
	if (x.nm < y.nm)
		return -1;
	if (x.th > y.th)
		return 1;
	if (x.th < y.th)
		return -1;
	if (x.ng > y.ng)
		return 1;
	if (x.ng < y.ng)
		return -1;
	return 0;
}
void Xuat(NGAY x, NGAY y)
{
	int ss = SoSanh(x, y);
	cout << ss;
}
int main()
{
	NGAY x,y;
	Nhap(x,y);
	Xuat(x,y);
}