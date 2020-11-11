#include"diem2D.h"

void Nhapdiem(Diem &diem)
{
	cout << "Nhap X cua diem:" << endl;
	cin >> diem.X;
	cout << "Nhap Y cua diem :" << endl;
	cin >> diem.Y;
	cout << endl;
}
void xuatDiem(Diem diem)
{
	cout << "Toa do X la :" << diem.X << endl;
	cout << "Toa do Y la : " << diem.Y << endl;
	cout << endl;

}
float tinhKhoangCach(Diem diem1, Diem diem2)
{
	int a = diem1.X - diem2.X;
	int b = diem1.Y - diem2.Y;

	float kq = sqrt(a*a + b*b);
	return kq;

}
void nhapDanhSachDiem(Diem diems[100] , int &n)
{
	cout << "Nhap so luong diem : " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem -> [" << i <<"] " << endl;
		Nhapdiem(diems[i]);
	}
}
void xuatDanhSachDiem(Diem diems[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Diem -> [" << i <<"] "<< endl;
		xuatDiem(diems[i]);
	}
}
bool ktGocPhanTu(Diem diem, int goc)
{
	if (diem.X==0&diem.Y)
	{
		return true;
	}
	if (diem.X>0 &&diem.Y>0&&goc==1)
	{
		return true;
	}
	if (diem.X>0 && diem.Y>0 && goc == 2)
	{
		return true;
	}
	if (diem.X>0 && diem.Y>0 && goc == 3)
	{
		return true;
	}
	if (diem.X>0 && diem.Y>0 && goc == 4)
	{
		return true;
	}
	return false;
}
int layGocPhanTu(Diem diem)
{
	int gocPhanTu = 0;
	if (ktGocPhanTu(diem,1))
	{
		gocPhanTu = 1;
	}
	else if (ktGocPhanTu(diem,2))
	{
		gocPhanTu = 2;
	}
	else if (ktGocPhanTu(diem, 3))
	{
		gocPhanTu = 3;
	}
	else if (ktGocPhanTu(diem, 4))
	{
		gocPhanTu = 4;
	}

	return gocPhanTu;
}