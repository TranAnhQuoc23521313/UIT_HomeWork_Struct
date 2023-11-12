#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}
int ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		return 1;
	return 0;
}
int main()
{
	DIEM P;
	Nhap(P);
	cout << ktThuoc2(P);
	return 0;
}