#include <iostream>
#include <iomanip>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN& P, DIEMKHONGGIAN& Q)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
	cout << "Nhap x: ";
	cin >> Q.x;
	cout << "Nhap y: ";
	cin >> Q.y;
	cout << "Nhap z: ";
	cin >> Q.z;
}
int ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return 1;
	return 0;
}
int main()
{
	DIEMKHONGGIAN P, Q;
	Nhap(P, Q);
	cout << ktTrung(P, Q);
	return 0;
}