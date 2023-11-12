#include<iostream>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
int ktNhuan(NGAY);
void Xuat(NGAY);
void GanNhauNhat(NGAY[], int, NGAY&, NGAY&);
int SoNgayToiDaTrongNam(NGAY);
int KhoangCach(NGAY, NGAY);	
int SoThuTu(NGAY);
int SoNgayToiDaTrongThang(NGAY);
void Nhap(NGAY[], int&);
int SoThuTuTrongNam(NGAY);

int main()
{
	NGAY a[100], x, y;
	int n;
	Nhap(a, n);
	GanNhauNhat(a, n, x, y);
	cout << "Hai ngay gan nhau nhat la: ";
	cout << "\nNgay 1: ";
	Xuat(x);
	cout << "\nNgay 1: ";
	Xuat(y);
	return 0;
}
void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}

void GanNhauNhat(NGAY a[], int n,
	NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.nm - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.nm };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}