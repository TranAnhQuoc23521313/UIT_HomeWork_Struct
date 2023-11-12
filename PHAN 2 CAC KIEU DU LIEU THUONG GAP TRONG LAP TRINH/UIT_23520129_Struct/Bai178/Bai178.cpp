#include <iostream>
#include <iomanip>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM& P)
{
	cout << setw(8) << "Nhap x:";
	cin >> P.x;
	cout << setw(8) << "Nhap y:";
	cin >> P.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}
void GanNhauNhat(DIEM a[], int n,DIEM & P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
		{
			P = a[i];
			Q = a[j];
		}
}
void Xuat(DIEM k)
{
	cout << k.x << "," << k.y;
}
int main()
{
	DIEM P, Q;
	DIEM a[500], b;
	int n;
	Nhap(P);
	Nhap(Q);
	Nhap(a, n);
	GanNhauNhat(a, n, P, Q);
	cout << "Hai diem gan nhau nhat la: (" << P.x << ", " << Q.y << ") va ("
		<< Q.x << ", " << P.y << ")\n";
	return 0;
}