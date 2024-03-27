#include<iostream>
#include<cmath>
using namespace std;

class SinhVien{
private:
	string MaSV,TenSV;
public:
	SinhVien(){
		this->MaSV = "Chua Co!";
		this->TenSV = "Ko Co";
	}
	
	SinhVien(string MaSV, string TenSV){
		this->MaSV = MaSV;
		this->TenSV = TenSV;
	}
	void nhap(){
		cout << "\nNhap Ma SV: ";
		cin >> this->MaSV;
		
		rewind(stdin);
		cout << "\nNhap Ho Ten: ";
		getline(cin, this->TenSV);
	}
	
	void xuat(){
		cout << this->MaSV <<endl;
		cout << this->TenSV;
	}
	
	string tachTen(){
		int n = this->TenSV.length();
		int vt = -1;
		for (int i = n - 1; i >= 0; i--){
			if(this->TenSV[i] != ' ' && this->TenSV[i - 1] == ' '){
				vt = i;
				break;
			}
		}
		
		string s = "";
		for (int i = vt; i < n; i++){
			s += this->TenSV[i];
		}
		
		return s;
	}
};



int main(){
	SinhVien sv1;
	sv1.nhap();
	cout << sv1.tachTen() << endl;
	sv1.xuat();
	
	
	return 0;
}
