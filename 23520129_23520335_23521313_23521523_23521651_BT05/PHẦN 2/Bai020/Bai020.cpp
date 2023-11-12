#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);
int main()
{
	DIEM P,Q;
	cout << "Nhap toa do diem P: \n";
	Nhap(P);
	cout << "Nhap toa do diem Q: \n";
	Nhap(Q);
	float kc = KhoangCach(P, Q);
	cout << "Khoang cach giua hai diem P va Q: " << kc;
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}