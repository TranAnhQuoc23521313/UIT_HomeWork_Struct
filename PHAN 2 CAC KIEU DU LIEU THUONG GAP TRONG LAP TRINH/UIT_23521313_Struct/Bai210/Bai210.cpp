#include <iostream>
#include <iomanip>

using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
int KtCapTrungNhau(DUONGTHANG[], int);
bool KtThuoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG a[500];
	int n;
	Nhap(a, n);
	cout << KtCapTrungNhau(a, n);
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

bool KtThuoc(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return true;  // d1 va d2 trung nhau
	return false;  // d1 va d2 khong trung nhau
}

int KtCapTrungNhau(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (KtThuoc(a[i], a[j]))
				flag = 1;
	return flag;
}