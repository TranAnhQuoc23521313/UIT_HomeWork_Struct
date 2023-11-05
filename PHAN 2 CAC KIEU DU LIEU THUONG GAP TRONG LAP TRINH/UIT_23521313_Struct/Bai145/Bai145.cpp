#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
float KhoangCach(DIEM, DIEM);
int DinhDang(TAMGIAC);
bool KtTamGiacVuong(float, float, float);

int main()
{
	TAMGIAC t;
	cout << "Nhap vao toa do 3 dinh tam giac ABC: " << endl;
	Nhap(t);
	switch (DinhDang(t))
	{
	case 0: cout << "Khong la tam giac"; break;
	case 1: cout << "Tam giac deu"; break;
	case 2: cout << "Tam giac vuong can"; break;
	case 3: cout << "Tam giac vuong"; break;
	case 4: cout << "Tam giac can"; break;
	case 5: cout << "Tam giac thuong"; break;
	}
	return 0;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap A: " << endl;
	Nhap(t.A);
	cout << "Nhap B: " << endl;
	Nhap(t.B);
	cout << "Nhap C: " << endl;
	Nhap(t.C);
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

int DinhDang(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (!(a + b > c && a + c > b && b + c > a))
		return 0;   // Khong la tam giac
	if (a == b && b == c)
		return 1;   // Tam giac deu
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
	{
		if (a == b || a == c || b == c)
			return 2;  // Tam giac vuong can
		return 3;  // Tam giac vuong
	}
	if (a == b || a == c || b == c)
		return 4;  //Tam giac can
	return 5;  // Tam giac thuong
}



// Truong hop A(0,0) B(3,0) C(0,3) chay van ra tam giac can thay vi la tam giac vuong can