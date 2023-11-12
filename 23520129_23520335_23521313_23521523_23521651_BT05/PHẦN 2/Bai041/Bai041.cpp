#include<iostream>
using namespace std;
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN M;
	Nhap(M);
	cout << "Toa do diem doi xung qua Oxz: ";
	Xuat(DoiXungOxz(M));
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z; 
	return temp;
}