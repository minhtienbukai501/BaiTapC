#include<iostream>
using namespace std;
class PhanSo{
private:
	int TuSo, MauSo;
public:
	PhanSo();
	void Nhap();
	void Xuat();
	PhanSo(int, int);
	PhanSo(const PhanSo&);
	~PhanSo();	
	PhanSo operator +(PhanSo);	

};


PhanSo::PhanSo()
{
	TuSo = 1;
	MauSo = 1;	
}
PhanSo::PhanSo(int Tu, int Mau)
{
	this->TuSo = Tu;
	this->MauSo = Mau;
} 

PhanSo::~PhanSo()
{
}


PhanSo::PhanSo(const PhanSo &x)
{
	this->TuSo = x.TuSo;
	this->MauSo = x.MauSo;
}

void PhanSo::Nhap()
{
	cout << "\nNhap Tu So: ";
	cin >> TuSo;
	cout << "\nNhap Mau So: ";
	cin >> MauSo;
}

void PhanSo::Xuat()
{
	cout << TuSo << " / " << MauSo;
}

PhanSo PhanSo::operator +(PhanSo b)
{
	PhanSo Tong(this->TuSo * b.MauSo + this->MauSo * b.TuSo, this->MauSo * b.MauSo);
	
	return Tong;
}

int main()
{
	PhanSo a(3, 4);
	PhanSo b(a);
	b.Xuat();
 
	
	
	return 0;
}
