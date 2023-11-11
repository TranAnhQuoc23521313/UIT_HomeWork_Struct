#include<iomanip>
#include<iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&, int);
int ktTrung(DIEM, DIEM);

int main()
{
	DIEM M, N;
	Nhap(M, 1);
	Nhap(N, 2);
	if (ktTrung(M, N) == 1)
		cout << "Hai diem trung nhau.";
	else
		cout << "Hai diem khong trung nhau.";
	return 0;
}
void Nhap(DIEM& P, int pb)
{
	cout << "Nhap x"<< pb <<": ";
	cin >> P.x;
	cout << "Nhap y"<< pb <<": ";
	cin >> P.y;

}
int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}	