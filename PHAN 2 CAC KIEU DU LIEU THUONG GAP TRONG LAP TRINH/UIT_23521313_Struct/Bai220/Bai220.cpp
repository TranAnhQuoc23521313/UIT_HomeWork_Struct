#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);

int DemThuoc3(DIEM[], int);
bool KtThuoc3(DIEM);

int main()
{
	DIEM a[500];
	int n;
	Nhap(a, n);
	cout << "So luong diem thuoc goc phan tu thu 3: " << DemThuoc3(a, n);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

int DemThuoc3(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KtThuoc3(a[i]))
			dem++;
	return dem;
}

bool KtThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return true;
	return false;
}