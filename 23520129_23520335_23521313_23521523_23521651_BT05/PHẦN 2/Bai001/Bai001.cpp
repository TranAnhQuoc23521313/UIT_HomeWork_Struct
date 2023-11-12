#include<iostream>
using namespace std;
struct diem { float x; float y; }; 
typedef struct diem DIEM;
void Nhap(DIEM&); 
void Xuat(DIEM);
int main()
{
	DIEM M;
	Nhap(M);
	cout << "\nToa do diem vua nhap:";
	Xuat(M);
	return 1;
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
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}