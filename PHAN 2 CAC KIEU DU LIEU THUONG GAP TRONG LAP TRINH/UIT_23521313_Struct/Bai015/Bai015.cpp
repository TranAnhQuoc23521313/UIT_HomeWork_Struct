#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "Toa do diem vua nhap: \n";
	cout << "x = " << P.x << endl;
	cout << "y = " << P.y;
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}