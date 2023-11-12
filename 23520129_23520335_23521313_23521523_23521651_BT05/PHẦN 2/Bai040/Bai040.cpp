#include <iostream>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung qua Oxy cua P: \n";
	DIEMKHONGGIAN P_DX = DoiXungOxy(P);
	Xuat(P_DX);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap vap X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
	cout << "Nhap vao Z: ";
	cin >> P.z;
}

DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y;
	cout << "\n z = " << P.z;
}