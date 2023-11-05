#include <iostream>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Xuat(NGAY);
void Nhap(NGAY&);
NGAY KeTiep(NGAY);
int KtNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);
NGAY TimNgay(int);
NGAY TimNgay(int, int);

int main()
{
	NGAY DAY;
	Nhap(DAY);
	cout << "Ngay ke tiep la: ";
	NGAY NEXT_DAY = KeTiep(DAY);
	Xuat(NEXT_DAY);
	return 0;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

NGAY KeTiep(NGAY x)
{
	int stt = SoThuTu(x);
	stt += 1;
	return TimNgay(stt);
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int stt = 0;
	int thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x) == 1)
		thang[1] = 29;
	return thang[x.Thang - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt += SoNgayToiDaTrongNam(temp);
	}
	return	(stt + SoThuTuTrongNam(x));
}

NGAY TimNgay(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		Nam++;
		NGAY temp = { 1,1,Nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(Nam, stt);
}

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt -= SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}