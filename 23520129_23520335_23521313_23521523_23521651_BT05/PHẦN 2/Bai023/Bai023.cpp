#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}
DIEM DoiXungTung(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}
void Xuat(DIEM P)
{
	cout << "x: " << -P.x << endl;
	cout << "y: " << P.y << endl;
}
int main()
{
	DIEM P;
	Nhap(P);
	DoiXungTung(P);
	Xuat(P);
	return 0;
}