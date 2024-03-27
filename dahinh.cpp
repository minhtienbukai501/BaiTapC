#include<iostream>
using namespace std;

class person{
private: 
	string hoten, diachi, gioitinh;
public: 
	void nhap(){
		rewind(stdin);
		cout << "\nnhap ten: ";
		getline(cin, hoten);
		
		cout << "\nnhap dia chi: ";
		getline(cin, diachi);
		cout << "\nnhap gioi tinh: ";
		cin >> gioitinh;
	}
	
	void xuat(){
		cout << hoten <<  " " << diachi << " " << gioitinh;
	}
};

class HocSinh : public person{
private:
	string masv, gpa;
public :
	void nhap(){
		cout << "\nnhap ma sinh vien: ";
		cin >> masv;
		person::nhap();
		
		cout << "\nnhap gpa: ";
		cin >> gpa;
	}
	
	void xuat(){
		cout << masv << " ";
		person::xuat();
		cout << " " << gpa;
	}
};


int main(){
	person *p;
	HocSinh hs;
	p = &hs;
	p->nhap();
	p->xuat(); 
	
	return 0;
}
