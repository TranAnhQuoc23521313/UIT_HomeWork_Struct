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

int main()
{
	DIEM M;
	Nhap(M);
	Xuat(M);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;

}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}