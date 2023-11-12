#include <iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(DIEM& I)
{
	cout << "Nhap X = ";
	cin >> I.x;
	cout << "Nhap Y = ";
	cin >> I.y;
}
void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (a + b > c && b + c > a && a + c > b)
		return 1;
	return 0;
}
int main()
{
	TAMGIAC t;
	cout << "Nhap vao tam giac ABC: " << endl;
	Nhap(t);
	if (KiemTra(t) == 1)
		cout << "3 dinh A,B,C tao thanh 1 tam giac";
	else
		cout << "3 dinh A,B,C khong tao thanh 1 tam giac";
	return 0;
}