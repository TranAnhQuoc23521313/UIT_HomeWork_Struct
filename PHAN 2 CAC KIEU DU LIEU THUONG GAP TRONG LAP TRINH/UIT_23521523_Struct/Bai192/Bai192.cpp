#include <iostream>
 using namespace std;

 struct SoPhuc
 {
   float Thuc;
  float Ao;
};
 typedef struct SoPhuc SOPHUC;
 
void Nhap(SOPHUC& x)
 {
	 cout << "\nNhap thuc: ";
	 cin >> x.Thuc;
	 cout << "Nhap ao: ";
	 cin >> x.Ao;
 }
 void Nhap(SOPHUC x[],int& n)
 {
	 cin >> n;
	 for (int i = 0; i < n; i++)
	 {
		 cout << "Nhap a[" << i << "]";
		 Nhap(x[i]);
	 }
 }
 void Xuat(SOPHUC x)
 {
	 cout << "\nThuc: " << x.Thuc;
	 cout << "\nAo: " << x.Ao;
 }
 void Xuat(SOPHUC x[], int n)
 {
	 for (int i = 0; i < n; i++)
	 {
		 cout << "\na[" <<i<< "]:";
		 Xuat(x[i]);
	 }
 }


 int main()
 {
	 SOPHUC M[100];
	 int n;
	 Nhap(M,n);
	 cout << "\nCAc so phuc vua nhap:";
	 Xuat(M,n);
	 return 1;
 }

 