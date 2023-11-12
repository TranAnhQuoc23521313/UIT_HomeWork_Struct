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


int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;  
	return 0; 
}
int ktSongSong(DUONGTHANG a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 1; i++)
		if (!ktSongSong(a[i], a[0]))
		flag = 0;;
	return flag;
}

int main()
{
	DUONGTHANG a[500];
	int n;
	Nhap(a, n);
	cout << ktSongSong(a, n);
	return 0;
}