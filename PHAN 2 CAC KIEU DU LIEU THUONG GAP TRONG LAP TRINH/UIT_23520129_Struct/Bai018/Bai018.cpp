#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM& P, DIEM& Q)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
	cout << "Nhap x:";
	cin >> Q.x;
	cout << "Nhap y:";
	cin >> Q.y;
}
void Xuat(DIEM P, DIEM Q)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
	cout << "x: " << Q.x << endl;
	cout << "y: " << Q.y << endl;
}
float KhoangCachX(DIEM P,DIEM Q)
{
	return abs(Q.x - P.x);
}
int main()
{
	DIEM P, Q;
	Nhap(P, Q);
	Xuat(P, Q);
	cout << "\nKhoang cach giua hai diem theo phuong Ox la: " <<  KhoangCachX(P, Q);
	return 0;
}