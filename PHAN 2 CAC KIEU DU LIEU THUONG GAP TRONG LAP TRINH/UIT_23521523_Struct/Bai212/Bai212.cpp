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

struct diem
{
	int x, y;
};
typedef struct diem DIEM;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&,DIEM&);

void Xuat(DUONGTHANG k)
{
	cout << "\na:" << k.a;
	cout << "\nb:" << k.b;
	cout << "\nc:" << k.c;
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong thang a[" << i << "]";
		Xuat(a[i]);
	}
}
float khoangcach(DUONGTHANG d, DIEM P)


{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
DUONGTHANG gandiemnhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (khoangcach(a[i], P) < khoangcach(lc, P))
			lc = a[i];
	}
	return lc;
}

int main()
{
	DUONGTHANG a[500],b;
	DIEM P;
	int n;
	Nhap(a, n,P);
	b = gandiemnhat(a,n,P);
	Xuat(b);
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

void Nhap(DUONGTHANG a[], int& n,DIEM& P)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap diem P";
	cout << "\nx:";
	cin >> P.x;
	cout << "\ny:";
	cin >> P.y;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

