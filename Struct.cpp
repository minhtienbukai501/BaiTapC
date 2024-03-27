#include<iostream>
using namespace std;

struct hocSinh{
	string ten;
	double diem;
	
	hocSinh(string Ten, double Diem)
	{
		ten = Ten;
		diem = Diem;
	}
};

int main()
{
	hocSinh hs("Le Minh Tien", 4.4);
	cout << hs.diem<< endl;
	cout << hs.ten ;
	
	return 0;
}
