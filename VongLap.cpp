#include<iostream>
using namespace std;

struct SinhVien{
	string ma, Ten;
	int Tuoi;
	
	SinhVien(string m, string t, int age)
	{
		ma = m;
		Ten = t;
		Tuoi = age;
	}
};

void XuatSinhVien(SinhVien x)
{
	cout << x.ma << "\n";
	cout << x.Ten << "\n";
	cout << x.Tuoi << "\n";
}

int main()
{
	SinhVien x("18T", "Le Minh Tien", 18);
	XuatSinhVien(x);
	
	
	return 0;
}
