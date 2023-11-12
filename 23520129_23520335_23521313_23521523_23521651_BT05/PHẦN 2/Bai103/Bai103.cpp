#include <iostream>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(int&, int&);
NGAY TimNgay(int, int);
int KtNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
void Xuat(NGAY);

int main()
{
	int Nam, stt;
	Nhap(Nam, stt);
	NGAY Day = TimNgay(Nam, stt);
	Xuat(Day);
	return 0;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(int& Nam, int& stt)
{
	cout << "Nhap nam: ";
	cin >> Nam;
	cout << "Nhap so thu tu: ";
	cin >> stt;
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
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
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