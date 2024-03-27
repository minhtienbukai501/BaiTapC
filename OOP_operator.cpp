#include<iostream>
using namespace std;

class PhanSo{
private: 
	int TuSo, MauSo;
public: 
	PhanSo();
	void NhapPhanSo();
	void XuatPhanSo();
	friend PhanSo operator+(PhanSo , PhanSo );
	~PhanSo();
	
	
	
};

PhanSo::PhanSo()
{
	this->TuSo = 1;
	this->MauSo = 1;
}

void PhanSo::NhapPhanSo(){
	cout << "\nNhap Tu: ";
	cin >> this->TuSo;
	
	cout << "\nNhap Mau: ";
	cin >> this->MauSo;
}

void PhanSo::XuatPhanSo()
{
	cout << this->TuSo << "/" << this->MauSo;
}

PhanSo::~PhanSo()
{
	
}

PhanSo operator+(PhanSo a, PhanSo b)
{
	PhanSo tong;
	tong.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
	tong.MauSo = a.MauSo * b.MauSo;
	
	return tong;
}

int main()
{
	PhanSo a;
	a.NhapPhanSo();
	PhanSo b;
	a.NhapPhanSo();
	
	PhanSo Tong = a + b;
	
	Tong.XuatPhanSo();

	
	
	return 0;
}
