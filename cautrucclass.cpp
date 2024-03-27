#include<iostream>
#include<string>
using namespace std;

class Nhanvien
{
private:
	string Manv ;
	string Hoten;
	int Sdt; 
public: 
	void Nhap();
	Nhanvien * next;
	Nhanvien ();
	Nhanvien(string, string, int);
	string getMaNV();
	void setMaNV(string);
	string getHoTen();
	void setHoTen(string);
	int getSDT();
	void setSDT(int);
	void xuat();
	Nhanvien *getNhanVien();
	
};

void Nhanvien::Nhap()
{
	rewind(stdin);
	cout << "\nNhap ma nhan vien: ";
	getline(cin, this->Manv);
	cout << "\nNhap ho ten: ";
	getline(cin, this->Hoten);
	cout << "\nNhap so dien thoai: ";
	cin >> this->Sdt;
	
}

Nhanvien::Nhanvien()
{
	Manv = "";
	Hoten = "";
	Sdt = 0;
}

Nhanvien::Nhanvien(string m, string t, int s)
{
	this->Manv = m;
	this->Hoten = t;
	this->Sdt = s;

}

string Nhanvien::getHoTen()
{
	return this->Hoten;
}

void Nhanvien::setHoTen(string ht)
{
	this->Hoten = ht;
}

string Nhanvien::getMaNV()
{
	return this->Manv;
}

Nhanvien* Nhanvien::getNhanVien()
{
	Nhanvien *x;
	x->Hoten = this->Hoten;
	x->Manv = this->Manv;
	x->Sdt = this->Sdt;
	x->next = NULL;
	
	return x;
}


void Nhanvien::setMaNV(string mnv)
{
	this->Manv = mnv;
}

int Nhanvien::getSDT()
{
	return this->Sdt;
}

void Nhanvien::setSDT(int x)
{
	this->Sdt = x;
}

void Nhanvien::xuat(){
	cout << "\nMa sinh vien: " << this->Manv;
	cout << "\nHo ten: " << this->Hoten;
	cout << "\nSo dien thoai: " << this->Sdt;
}

class Quanly 
{
private:
	Nhanvien * first;
public:	
	Quanly();
	void themNhanVien(Nhanvien x);
	void xuat();
	
	
};

Quanly::Quanly()
{
	this->first = NULL;
}

void Quanly::themNhanVien(Nhanvien x)
{
	while(x->getHoTen() != "")
	{
		
	}
	Nhanvien *p = x.getNhanVien();
	if(this->first == NULL)
	{
		this->first = p;
	} else 
	{
		p->next = this->first;
		this->first = p;		
	}
}

int main()
{
	Quanly dsNhanVien;
	
	int n;
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		Nhanvien x;
		x.Nhap();
		dsNhanVien.themNhanVien(x);
	}
	
	return 0;
}
