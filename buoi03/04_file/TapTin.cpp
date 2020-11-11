#include"TapTin.h"
bool docTapTin()
{
	ifstream ip("taptin.txt", ios::in);
	if (!ip.is_open())
	{
		return false;
	}
	ip >> n;
	if (n>100)
	{
		return false;
	}
	for (int i = 0; i < 5; i++)
	{
		ip >> a[i];
	}
	ip.close();
	return true;
}
bool ghiTapTin()
{
	ofstream op("taptin.txt", ios::out);
	if (!op.is_open())
		return false;
	op << n << endl;
	for (int i = 0; i < n; i++)
	{
		op << a[i]<<" ";
	}
	op.close();
}
bool insert(int a[100],int &n, int p, int index)
{
	if (index>100 ||index<0||index>n)
	{
		return  false;
	}
	for (int i = n; i >index ; i--)
	{
		a[i] = a[i - 1];
	}
	a[index] = p;
	n++;
	return true;
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Array - > [" << i << "] :" << a[i] << endl;
	}
}
bool ghiTapTinNP()
{
	ofstream op("input.bin", ios::binary);
	if (!op.is_open())
	{
		return false;
	}
	op.write((char*)&n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		op.write((char*)&a[i], sizeof(int));
	}
	op.close();
	return true;
}
bool docTapTinNP()
{
	ifstream op("input.bin", ios::binary);
	if (!op.is_open())
	{
		return false;
	}
	op.read((char*)&n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		op.read((char*)&a[i], sizeof(int));
	}
	op.close();

	return true;
}


