#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
void Nhap(DIEM&);
void Xuat(DIEM);
DIEM TungLonNhat(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	cout << "Diem co tung do lon nhat trong mang: ";
	Xuat(TungLonNhat(a, n));
	return 0;
}


void Nhap(DIEM& t)
{
	cout << "\nNhap x: ";
	cin >> t.x;
	cout << "Nhap y: ";
	cin >> t.y;
}

void Xuat(DIEM t)
{
	cout << "\nToa do x: " << t.x << endl;
	cout << "Toa do y: " << t.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

DIEM TungLonNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i].y > lc.y)
			lc = a[i];
	return lc;
}