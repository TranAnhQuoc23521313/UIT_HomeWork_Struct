#include <iostream>
#include <iomanip>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);


int main()
{
	DIEM a[500];
	int n;
	Nhap(a, n);
	return 0;
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

void Nhap(DIEM& P)
{
	cout << setw(8) << "Nhap x:";
	cin >> P.x;
	cout << setw(8) << "Nhap y:";
	cin >> P.y;
}
