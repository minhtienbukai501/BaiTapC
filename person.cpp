#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class NhanVien{
protected:
	string MaSo, HoTen, NgaySinh, DiaChi;
public:
	virtual void nhap(){
		cout << "\nnhap ma so: ";
		cin >>MaSo;
		cin.ignore();
		cout <<"\nNhap ho ten: ";
		getline(cin, HoTen);

		cout << "\nNhap ngay sinh(dd/mm/yyyy): ";
		cin >> NgaySinh;
		cin.ignore();
		cout << "\nNhap dia chi: ";
		getline(cin, DiaChi);
	}	
	
	virtual void xuat(){
		cout <<left<< setw(15) << MaSo << setw(32) << HoTen << setw(20) << NgaySinh << setw(30) << DiaChi;
	}
	NhanVien(){
		MaSo = HoTen = NgaySinh = DiaChi = "";
	}
	~NhanVien();
};


int main(){
	NhanVien *a = new NhanVien;
	a->nhap();
	a->xuat();
	
	
	return 0;
}

