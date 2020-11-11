#include"General.h"
bool flag = false;
void main()
{

	/* chuyển từ cin sang getline thì cần cin.ignore() ngược  lại thì không cần
	kiểm tra biến cờ trước khi getline
	getline cập nhật flag = false
	cin cập nhật flag  = true
	*/

	//string us, name, pass, repass, address;
	//cout << "Nhap user name :" << endl;
	//cin >> us; flag = true;

	//cout << "Nhap Ten :" << endl;
	//if (flag == true)
	//{
	//	cin.ignore();
	//}
	//getline(cin, name); flag = false;

	//cout << "Nhap Address :" << endl;
	//if (flag == true)
	//{
	//	cin.ignore();
	//}
	//getline(cin, address); flag = false;


	//cout << "Username la :" << us << endl;
	//cout << "Address la :" << address;
	//cout << "Nhap password :" << endl;
	//if (flag == true)
	//{
	//	cin.ignore();
	//}
	//getline(cin, pass); flag = false;
	//cout << "Nhap  lai password :" << endl;
	//if (flag == true)
	//{
	//	cin.ignore();
	//}
	//getline(cin, repass); flag = false;


	//if (pass.compare(repass) == 0) //so sanh 2 chuoi string 
	//	cout << "Khop !!!!" << endl;
	//else
	//{
	//	cout << "Khong khop";

	//}
	//cout << "Cat 3 ki tu" << name.substr(1, 3);// cat chuoi

	//cout << "Tim chu h" << name.find("h"); // tim chuoi

	char hoTen[50] = { 'a', 'n', 'h', 'l', 'a', 'b', 'i', 'n', 'h', 'b', 'o', 'n', 'g', '\0' };
	cout << hoTen;
	cout << "So luong" << strlen(hoTen) << endl;
	char cut[10];
	int count = 0;
	for (int  i = 2; i <=5 ; i++) // cắt chuỗi từ index = 2 đến index  = 5
	{
		cut[count++] = hoTen[i];
	}
	cut[count] = '\0';
	cout << "Cat" << cut;
	system("pause");
}