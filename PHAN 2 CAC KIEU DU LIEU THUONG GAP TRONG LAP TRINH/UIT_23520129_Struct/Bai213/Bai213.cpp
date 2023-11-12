#include <iostream>
#include <iomanip>

using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
struct diem
{
	float x, y;
};
typedef struct diem DIEM;
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
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
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1; 
	return 0;
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1; 
	return 0;  
}
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
int ktDongQui(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		if (ktCat(a[i], a[j]))
		{
			DIEM PP = GiaoDiem(a[i], a[j]);
			    for (int k = 0; k < n; k++)
			if (k != i && k != j &&
				ktThuoc(a[k], PP))
			return 1;
		}
		return 0;
}
int main()
{
	DUONGTHANG a[500];
	int n;
	Nhap(a, n);
	cout << ktDongQui(a, n);
	return 0;
}