#include <iostream>
#include <cmath>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P, Q;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Nhap vao toa do diem Q: " << endl;
	Nhap(Q);
	cout << "Khoang cach giua hai diem P va Q theo Ox: " << KhoangCachX(P, Q);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
	cout << "Nhap vao Z: ";
	cin >> P.z;
}

float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}