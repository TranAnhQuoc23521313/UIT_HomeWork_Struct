#include <iostream>

using namespace std;

struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void nhapPhanSo(PHANSO& phanSo) {
	cout << "Nhap tu so: ";
	cin >> phanSo.Tu;

	cout << "Nhap mau so: ";
	cin >> phanSo.Mau;
}

int main() {
	PHANSO phanSo;

	nhapPhanSo(phanSo);

	cout << "Phan so vua nhap la: " << phanSo.Tu << "/" << phanSo.Mau << endl;

	return 0;
}
