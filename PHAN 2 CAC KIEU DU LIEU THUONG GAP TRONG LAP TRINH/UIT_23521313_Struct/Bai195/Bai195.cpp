#include <iostream>
#include <iomanip>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void HoanVi(SOPHUC&, SOPHUC&);
void SapXep(SoPhuc[], int);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);

int main()
{
	SOPHUC a[500];
	int n;
	Nhap(a, n);
	cout << "Mang cac so phuc truoc khi sap xep: \n";
	Xuat(a, n);
	SapXep(a, n);
	cout << "\nMang cac so phuc sau khi sap xep tang dan theo phan thuc: \n";
	Xuat(a, n);
	return 0;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap Phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap Phan ao: ";
	cin >> x.Ao;
}

void HoanVi(SOPHUC& a, SOPHUC& b)
{
	SOPHUC temp = a;
	a = b;
	b = temp;
}

void SapXep(SOPHUC a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Thuc > a[j].Thuc)
				HoanVi(a[i], a[j]);
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10);
		Xuat(a[i]);
	}
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << x.Ao << "i";
}