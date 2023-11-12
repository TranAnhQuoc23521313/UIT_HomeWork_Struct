#include <iostream>
#include <string>
 #include <iomanip>
 using namespace std;

 struct Ngay
 {
   int Ngay;
   int Thang;
  int Nam;
 };
 typedef struct Ngay NGAY;

 struct ThoiGian
 {
  int Gio;
	    int Phut;
   int Giay;
 };
 typedef struct ThoiGian THOIGIAN;

 struct Ve
{
   string TenPhim;
  int GiaTien;
    THOIGIAN XuatChieu;
    NGAY NgayXem;
 };
typedef struct Ve VE;

 void Nhap(NGAY&);
 void Xuat(NGAY);

 void Nhap(THOIGIAN&);
 void Xuat(THOIGIAN);

 void Nhap(VE&);
 void Xuat(VE);

 void Nhap(VE[], int&);
 void Xuat(VE[], int);

 int TongTien(VE[], int);
 int SoSanh(NGAY, NGAY);
 int SoSanh(THOIGIAN, THOIGIAN);
 int SoSanh(VE, VE);
 void HoanVi(VE&, VE&);
 void SapXep(VE[], int);

 int main()
 {
    int n;
    VE b[100];
   Nhap(b, n);
   Xuat(b, n);

	   int kq = TongTien(b, n);
   cout << "\nTong tien: " << kq;
	
	   SapXep(b, n);
    cout << "\nDanh sach ve sau khi sap xep: ";
   Xuat(b, n);
	    return 1;
 }

 void Nhap(NGAY & x)
 {


   cout << "Nhap ngay:";
   cin >> x.Ngay;
   cout << "Nhap thang:";
   cin >> x.Thang;
	   cout << "Nhap nam:";
   cin >> x.Nam;
 }

 void Xuat(NGAY x)
 {
   cout << "Ngay: " << x.Ngay << endl;
   cout << "Thang: " << x.Thang << endl;
	   cout << "Nam: " << x.Nam << endl;
	 }

 void Nhap(THOIGIAN & x)
 {
	   cout << "Nhap gio:";
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

 void Nhap(VE & x)
 {
	   cout << "Nhap ten phim:";
	    cin.ignore();
	  getline(cin, x.TenPhim);
	    cout << "Nhap gia tien:";
    cin >> x.GiaTien;
	    cout << "Nhap xuat chieu:" << endl;
	    Nhap(x.XuatChieu);
	   cout << "Nhap ngay xem:" << endl;
    Nhap(x.NgayXem);


	 }

 void Xuat(VE x)
 {
	   cout << "Ve Xem Phim:" << endl;
	   cout << "Ten Phim:" << x.TenPhim << endl;
	   cout << "Gia tien:" << x.GiaTien << endl;
	cout << "Xuat chieu:" << endl;
	  Xuat(x.XuatChieu);
	   cout << "Ngay xem:" << endl;
    Xuat(x.NgayXem);
	 }

 void Nhap(VE a[], int& n)
 {
	   cout << "\nNhap so luong ve: ";
	    cin >> n;
	    for (int i = 0; i < n; i++)
		   {
		      cout << "\nVe thu " << i + 1 << ": \n";
	       Nhap(a[i]);
		   }
 }

 void Xuat(VE a[], int n)
{
    for (int i = 0; i < n; i++)
		   {
		       cout << "\nVe thu " << i + 1 << ": ";
		       Xuat(a[i]);
		    }
	}

 int TongTien(VE a[], int n)
{
	   int s = 0;
	  for (int i = 0; i < n; i++)
		    s = s + a[i].GiaTien;
	   return s;
	 }

 int SoSanh(NGAY x, NGAY y)
 {


   if (x.Nam > y.Nam)
	     return 1;
	   if (x.Nam < y.Nam)
		     return -1;
	   if (x.Thang > y.Thang)
		     return 1;
	  if (x.Thang < y.Thang)
		     return -1;
    if (x.Ngay > y.Ngay)
		      return 1;
	    if (x.Ngay < y.Ngay)
		   return -1;
	   return 0;
	}

 int SoSanh(THOIGIAN x, THOIGIAN y)
 {
	   if (x.Gio > y.Gio)
		     return 1;
	    if (x.Gio < y.Gio)
		      return -1;
   if (x.Phut > y.Phut)
		      return 1;
	    if (x.Phut < y.Phut)
	      return -1;
	   if (x.Giay > y.Giay)
		      return 1;
    if (x.Giay < y.Giay)
		   return -1;
	   return 0;
	 }

 int SoSanh(VE x, VE y)
{
	   if (SoSanh(x.NgayXem, y.NgayXem) == 1)
		       return 1;
	    if (SoSanh(x.NgayXem, x.NgayXem) == 0)
		      if (SoSanh(x.XuatChieu, y.XuatChieu) == 1)
		          return 1;
	   return 0;
	 }

 void HoanVi(VE & a, VE & b)


 {
	    VE temp;
    temp = a;
	    a = b;
	   b = temp;
	 }

 void SapXep(VE a[], int n)
 {
	 for (int i = 0; i < n - 1; i++)
		 for (int j = i + 1; j < n; j++)

			 HoanVi(a[i], a[j]);
 }
