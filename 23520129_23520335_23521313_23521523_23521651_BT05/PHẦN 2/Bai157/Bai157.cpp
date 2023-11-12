#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
 {
   float a[100];
    int n;
};
 typedef struct DaThuc DATHUC;

void Nhap(DATHUC& f)
 {
	 cout << "Nhap bac da thuc: ";
	 cin >> f.n;
	 for (int i = f.n; i >= 0; i--)
	 {
		 cout << "Nhap he so a[" << i << "]: ";
		 cin >> f.a[i];
	 }
 }
int main()
{
	DATHUC f1;
	Nhap(f1);
	return 1;
}

 