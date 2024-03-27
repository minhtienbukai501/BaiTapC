#include<iostream>
using namespace std;

class Person{
protected:
	string hoten, diachi, sdt;
	int  namsinh;
public:
	Person(string ht, string dc, string sdt, int ns):
	hoten(ht), diachi(dc), sdt(sdt), namsinh(ns){}
	
	Person(){
		hoten = diachi = sdt = "";
		namsinh = 2000;
	}
	
	virtual void nhap(){
		fflush(stdin);
		cout << "\nnhap ho ten: ";
		getline(cin, hoten);
		cout <<"\nnhap dia chi: " ;
		getline(cin, diachi);
		cout << "\nnhap so dien thoai: ";
		cin >> sdt;
		cout << "\nnhap nam sinh: ";
		cin >> namsinh;
	}
	virtual void xuat(){
		cout << "\nho ten: " << hoten;
		cout <<"\nDia chi: " << diachi;
		cout << "\nSo Dien Thoai: " << sdt;
		cout << "\nNam sinh: " << namsinh; 
	}
};

class SinhVien : public Person{
private:
	string masinhvien;
	float gpa;
public:
	SinhVien(){
		masinhvien = "";
		gpa = 0;
	}
	SinhVien(string ht, string dc, string sdt, int ns, string msv, float gpa):Person(ht, dc,sdt, ns),masinhvien(msv), gpa(gpa){
	}
	
	void nhap(){
		cout << "\nnhap ma sinh vien: ";
		cin >> masinhvien;
		Person::nhap();
		cout << "\nnhap gpa: ";
		cin >> gpa;
	}
	
	void xuat(){
		cout << "\nma sinh vien: " << masinhvien;
		Person::xuat();
		cout << "\ngpa: " << gpa;
	}
};


class HocSinh : public Person{
private:
	string mahs;
	float dtb;
public:
	HocSinh(){
		mahs = "";
		dtb = 0;
	}
	HocSinh(string ht, string dc, string sdt, int ns, string mhs, float dtb):Person(ht, dc,sdt, ns),mahs(mhs), dtb(dtb){
	}
	
	void nhap(){
		cout << "\nnhap ma hoc sinh: ";
		cin >> mahs;
		Person::nhap();
		cout << "\nnhap diem trung binh: ";
		cin >> dtb;
	}
	
	void xuat(){
		cout << "\nma hoc sinh: " << mahs;
		Person::xuat();
		cout << "\ndiem trung binh: " << dtb;
	}
};

int main(){
	int n;
	cout << "\nnhap so luong hoc vien: ";
	cin >> n;
	Person *dsHV = new Person[n];
	
	
	Person *x;
	for (int i = 0 ; i < n; i++){
		int luachon;
		do{
			cout << "\n\t1.Nhap Thong Tin Sinh Vien";
			cout << "\n\t2.Nhap Thong Tin Hoc Sinh";
			cout << "\nban chon: ";
			cin >> luachon;
		} while(luachon != 1 && luachon != 2);
		if(luachon == 1){
			x = new SinhVien;
			x->nhap();
		
		} else{
			x = new HocSinh;
			x->nhap();
		}
		dsHV[i]= *x;
	}
	
	for (int i = 0; i < n; i++){
		dsHV[i].xuat();
		cout << endl;
	}

	
	return 0;
}
