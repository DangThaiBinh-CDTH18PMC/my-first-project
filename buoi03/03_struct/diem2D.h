#include"General.h"

struct Diem{
	int X;
	int Y;
};

void Nhapdiem(Diem &diem);
void xuatDiem(Diem);
float tinhKhoangCach(Diem, Diem);
void nhapDanhSachDiem(Diem[],int&);
void xuatDanhSachDiem(Diem[],int);
bool ktGocPhanTu(Diem, int);
int layGocPhanTu(Diem);