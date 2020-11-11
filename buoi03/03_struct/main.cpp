#include"diem2D.h"
void main()
{
	Diem diems[100];
	int n=0;
	nhapDanhSachDiem(diems, n);

	float kc = tinhKhoangCach(diems[0], diems[1]);
	cout << "Khoang cach  giua hai diem la :" << kc << endl;

	xuatDanhSachDiem(diems, n);
	cout << "Nhap vi tri diem muon kiem tra goc phan tu trong mang :" << endl;
	int index;
	cin >> index;
	int p;
	cout << "Nhap goc phan tu muon kiem tra :" << endl;
	cin >> p;


	if (ktGocPhanTu(diems[index],p))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	cout << "Nhap vi tri diem muon lay goc phan tu :" << endl;
	cin >> index;

	int gocPT = layGocPhanTu(diems[index]);
	if (gocPT==0)
	{
		cout << "Diem khong nam trong goc phan tu nao  :((" << endl;
	}
	else
	{
		cout << "Diem nam trong goc phan tu :" << gocPT << endl;
	}
	system("pause");
}