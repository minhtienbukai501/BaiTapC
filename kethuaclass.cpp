#include<iostream>
#include<string>
using namespace std;


class ConNguoi{
protected:
	string HoTen;
	int Tuoi;
public:
	void Nhap();
	void Xuat();

};

void ConNguoi::Nhap(){
	cout << "\nNhap ho ten: ";
	rewind(stdin);
	getline(cin, this->HoTen);
	
	cout << "\nNhap Tuoi: ";
	cin >> this->Tuoi;
}

void ConNguoi::Xuat(){
	cout << "\nHo Ten: " << this->HoTen;
	cout << "\nTuoi: " << this->Tuoi;
}

class SinhVien : ConNguoi {
private:
	string MaSinhVien;
	string Khoa;
	int Diem;
public:
	void Nhap();
	void Xuat();
	bool operator > (SinhVien);
};

void SinhVien::Nhap()
{
	cout << "\nNhap ma sinh vien: ";
	rewind(stdin);
	getline(cin, this->MaSinhVien);
	ConNguoi::Nhap();	
	cout << "\nNhap Khoa: ";
	rewind(stdin);
	getline(cin, this->Khoa);
	cout << "\nNhap Diem: ";
	cin >> this->Diem;

}

void SinhVien::Xuat()
{
	cout << "\nma sinh vien: " << this->MaSinhVien;
	ConNguoi::Xuat();
	cout << "\nKhoa: " << this->Khoa;
	cout << "\nDiem: " << this->Diem;
}

bool SinhVien::operator >(SinhVien b)
{
	return this->Diem > b.Diem;
}




int main()
{
	SinhVien sva, svb;
	sva.Nhap();
	svb.Nhap();
	if(sva > svb)
	{
		cout << "\nSva lon hon!";
	} else 
	{
		cout << "\nSvb lon hon!";
	}
	
	return 0;
}
