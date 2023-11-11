#include<iomanip>
#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungGoc(DIEM);

int main()
{
	DIEM M;
	Nhap(M);
	Xuat(DoiXungGoc(M));
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;

}

DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}