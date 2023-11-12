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
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);
int SoNgayToiDaTrongThang(NGAY);
void XuatThu(NGAY);
void Xuat(NGAY);

int main()
{
	NGAY n;
	Nhap(n);
	cout << "Ngay vua nhap la ";
	XuatThu(n);
	return 0;
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

int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
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

void XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu Nhat";
		break;
	case 1: cout << "Thu Hai";
		break;
	case 2: cout << "Thu Ba";
		break;
	case 3: cout << "Thu Tu";
		break;
	case 4: cout << "Thu Nam";
		break;
	case 5: cout << "Thu Sau";
		break;
	case 6: cout << "Thu Bay";
		break;
	}
}