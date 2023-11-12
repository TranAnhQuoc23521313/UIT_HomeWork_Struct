#include<iostream>
using namespace std; 

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Xuat(DIEM);
void Xuat(DUONGTRON c);

int main()
{
	DUONGTRON c;
	return 0;
}

void Xuat(DIEM i)
{
	cout << "(" << i.x << ";" << i.y << ")";
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}