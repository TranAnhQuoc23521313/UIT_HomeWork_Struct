#include<iostream>
using namespace std;
struct DiemKhongGian
{
	float x,y,z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
int main()
{
	DIEMKHONGGIAN M;
	Nhap(M);
	cout << "\nToa do diem khong gian vua nhap:";
	Xuat(M);
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "\nNhap y:";
	cin >> P.y;
	cout << "\nNhap z:";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx:" << P.x;
	cout << "\ny:" << P.y;
	cout << "\nz:" << P.z;
}