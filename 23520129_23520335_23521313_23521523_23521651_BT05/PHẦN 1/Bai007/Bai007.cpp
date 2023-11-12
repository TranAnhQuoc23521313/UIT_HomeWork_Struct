#include <iostream>
 #include <iomanip>
 #include <string>
 using namespace std;

 struct ThoiGian
 {
    int Gio;
    int Phut;
   int Giay;
 };
typedef struct ThoiGian THOIGIAN;

 struct Ngay
{
    int Ngay;
   int Thang;
   int Nam;
 };
 typedef struct Ngay NGAY;



 struct ChuyenBay
 {
    string MaSo;
  NGAY NgayBay;
  THOIGIAN GioBay;
    string NoiDi;
	   string NoiDen;
	 };
 typedef struct ChuyenBay CHUYENBAY;

 void Nhap(NGAY&);
 void Xuat(NGAY);

 void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

 void Nhap(CHUYENBAY&);
 void Xuat(CHUYENBAY);

 int main()
 {
    CHUYENBAY cb;
    Nhap(cb);
	    Xuat(cb);
	    return 0;
 }

 void Nhap(NGAY & x)
 {
	    cout << "\nNhap ngay:";
    cin >> x.Ngay;
	  cout << "Nhap thang:";
    cin >> x.Thang;
	    cout << "Nhap nam:";
    cin >> x.Nam;
	 }

 void Xuat(NGAY x)
{
	   cout << "\nNgay: " << x.Ngay << endl;
	    cout << "Thang: " << x.Thang << endl;
	    cout << "Nam: " << x.Nam << endl;


 }

 void Nhap(THOIGIAN & x)
{
   cout << "\nNhap gio:";
    cin >> x.Gio;
   cout << "Nhap phut:";
    cin >> x.Phut;
    cout << "Nhap giay:";
	   cin >> x.Giay;
 }

 void Xuat(THOIGIAN x)
 {
	   cout << "Gio: " << x.Gio << endl;
	       cout << "Phut: " << x.Phut << endl;
    cout << "Giay: " << x.Giay << endl;
 }

 void Nhap(CHUYENBAY & x)
 {
	   cout << "Nhap ma chuyen bay: ";
	   getline(cin, x.MaSo);
   cout << "Nhap ngay bay: ";
    Nhap(x.NgayBay);
	    cout << "Nhap gio bay: ";
	   Nhap(x.GioBay);
	   cout << "Nhap noi di: ";
    cin.ignore();
	   getline(cin, x.NoiDi);
	   cout << "Nhap noi den: ";
   getline(cin, x.NoiDen);
	 }

 void Xuat(CHUYENBAY x)
 {
	 cout << "\nMa chuyen bay: " << x.MaSo << endl;
	 cout << "Ngay bay: ";
	 Xuat(x.NgayBay);
	 cout << "\nGio bay: ";
	 Xuat(x.GioBay);
	 cout << "Noi di: " << x.NoiDi << endl;
	 cout << "Noi den: " << x.NoiDen << endl;
 }