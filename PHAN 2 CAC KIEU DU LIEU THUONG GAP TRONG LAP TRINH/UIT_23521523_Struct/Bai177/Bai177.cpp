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

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}
DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		if (KhoangCachGoc(a[i]) <
			KhoangCachGoc(lc))
			lc = a[i];
	}
	return lc;
}
void Xuat(DIEM k)
{
	cout << k.x << "," << k.y;
}
int main()
{
	DIEM a[500],b;
	int n;
	Nhap(a, n);
	b = GanGocNhat(a, n);
	Xuat(b);
	return 0;
}

