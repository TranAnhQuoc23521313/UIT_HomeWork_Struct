#include<iostream>
using namespace std;
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&, int); 
float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN M, N;
	Nhap(M, 1);
	Nhap(N, 2);
	cout << "Khoang cach giua hai diem: " << KhoangCachY(M, N);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P, int pb)
{
	cout << "Nhap x" << pb <<": ";
	cin >> P.x;
	cout << "Nhap y" << pb <<": ";
	cin >> P.y;
	cout << "Nhap z" << pb <<": ";
	cin >> P.z;
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}