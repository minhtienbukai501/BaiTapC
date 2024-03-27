#include<iostream>
#include<string>
using namespace std;

struct ChuyenXeNoiThanh {
    string MaSoChuyen;
    string HoTenTaiXe;
    string SoXe;
    int SoTuyen;
    float SoKmDiDuoc;
    float DoanhThu;
};


void NhapChuyenXe(ChuyenXeNoiThanh& chuyenXe) {
	
	fflush(stdin);
    cout << "Nhap Ma So: ";
    cin >> chuyenXe.MaSoChuyen;

   cout << "Nhap Ho Ten Tai Xe ";
    cin.ignore(); 
    getline(std::cin, chuyenXe.HoTenTaiXe);

    cout << "Nhap so xe: ";
    cin >> chuyenXe.SoXe;

    cout << "Nhap so tuyen: ";
   	cin >> chuyenXe.SoTuyen;

    cout << "Nhap so km da di duoc: ";
    cin >> chuyenXe.SoKmDiDuoc;

    cout << "Nhap doanh thu: ";
    cin >> chuyenXe.DoanhThu;
}


struct ChuyenXeNgoaiThanh {
    string MaSoChuyen;
    string HoTenTaiXe;
    string SoXe;
    string NoiDen;
    int SoNgayDiDuoc;
    float DoanhThu;
};


void NhapChuyenXeNgoaiThanh(ChuyenXeNgoaiThanh& chuyenXe) {
	fflush(stdin);
    cout << "Nhap ma so chuyen: ";
    cin >> chuyenXe.MaSoChuyen;

    cout << "Nhap ho ten tai xe: ";
    cin.ignore(); // Lo?i b? ký t? new line còn l?i t? l?nh tru?c dó
    getline(std::cin, chuyenXe.HoTenTaiXe);

    cout << "Nhap so xe: ";
    cin >> chuyenXe.SoXe;

    cout << "Nhap noi den: ";
    cin.ignore();
    getline(std::cin, chuyenXe.NoiDen);

    cout << "Nhap so ngay di duoc: ";
    cin >> chuyenXe.SoNgayDiDuoc;

    cout << "Nhap doanh thu: ";
    cin >> chuyenXe.DoanhThu;
}


void NhapdsChuyenXeNoiThanh(ChuyenXeNoiThanh ds[], int &n)
{
	cout << "\nNhap so luong chuyen xe: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap chuyen xe thu " << i + 1 <<"\n";
		NhapChuyenXe(ds[i]);
	}
	
	
}

void NhapdsChuyenXeNgoaiThanh(ChuyenXeNgoaiThanh ds[], int &n)
{
	cout << "\nNhap so luong chuyen xe: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap chuyen xe thu " << i + 1 <<"\n";
		NhapChuyenXeNgoaiThanh(ds[i]);
	}
	
	
}

void xuatNoiThanh(ChuyenXeNoiThanh cx)
{
	cout << "\nMa So: " << cx.MaSoChuyen;
	cout << "\nTen Tai Xe: " << cx.HoTenTaiXe;
	cout << "\nSo Xe: " << cx.SoXe;
	cout << "\nSo Tuyen: " << cx.SoTuyen;
	cout << "\nSo Km Di Duoc: " << cx.SoKmDiDuoc;
	cout << "\nDoanh Thu: " << cx.DoanhThu;
}


void xuatNgoaiThanh(ChuyenXeNgoaiThanh cx)
{
	cout << "\nMa So: " << cx.MaSoChuyen;
	cout << "\nTen Tai Xe: " << cx.HoTenTaiXe;
	cout << "\nSo Xe: " << cx.SoXe;
	cout << "\nNoi Den: " << cx.NoiDen;
	cout << "\nSo Ngay Di Duoc: " << cx.SoNgayDiDuoc;
	cout << "\nDoanh Thu: " << cx.DoanhThu;
	
}


void XuatdsChuyenXeNoiThanh(ChuyenXeNoiThanh ds[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "\Thong tin chuyen xe thu " << i + 1 <<"\n";
		xuatNoiThanh(ds[i]);
	}
	
	
}

void XuatdsChuyenXeNgoaiThanh(ChuyenXeNgoaiThanh ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong Tin chuyen xe thu " << i + 1 <<"\n";
		xuatNgoaiThanh(ds[i]);
	}
	
	
}

long long TongDoanhThuNoiThanh(ChuyenXeNoiThanh dsNoiThanh[] ,int nNoiThanh )
{
	long long Tong = 0;
	for(int i = 0; i < nNoiThanh; i++)
	{
		Tong += dsNoiThanh[i].DoanhThu;
	}	
	
	return Tong;
}


long long TongDoanhThuNgoaiThanh(ChuyenXeNgoaiThanh dsNgoaiThanh[] ,int nNgoaiThanh )
{
	long long Tong = 0;
	for(int i = 0; i < nNgoaiThanh; i++)
	{
		Tong += dsNgoaiThanh[i].DoanhThu;
	}	
	
	return Tong;
}


int main()
{
	ChuyenXeNoiThanh dsNoiThanh[100];
	ChuyenXeNgoaiThanh dsNgoaiThanh[100];
	
	int nNoiThanh;
	int nNgoaiThanh;
	cout << "\n\t----NHAP CHUYEN XE NOI THANH----\n";
	NhapdsChuyenXeNoiThanh(dsNoiThanh, nNoiThanh);
	
	cout << "\n\t----NHAP CHUYEN XE NGOAI THANH----\n";
	NhapdsChuyenXeNgoaiThanh(dsNgoaiThanh, nNgoaiThanh);
	
	
		cout << "\n\t----XUAT CHUYEN XE NOI THANH----\n";
	XuatdsChuyenXeNoiThanh(dsNoiThanh, nNoiThanh);
	
	cout << "\n\t----XUAT CHUYEN XE NGOAI THANH----\n";
	XuatdsChuyenXeNgoaiThanh(dsNgoaiThanh, nNgoaiThanh);
	
	
	cout << "\n\t---TONG DOANH THU NOI THANH: " << TongDoanhThuNoiThanh(dsNoiThanh, nNoiThanh);
	cout << "\n\t---TONG DOANH THU NGOAI THANH: "<< TongDoanhThuNgoaiThanh(dsNgoaiThanh, nNgoaiThanh);
	
	return 0;
}
