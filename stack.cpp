//Nh?p m?t s? nguyên duong n. Tính S = 1 + 1/2 + ... + 1/n
#include<iostream>
using namespace std;

int main()
{

	int sum;
	int i = 1;
	int n;
	cout << " Nhap so nguyen: n = ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{	
		sum = (float)1 / i;
			//cout << "1" << "/" << i << "\n";
	}
	cout << " Sum = " << (float)sum;





	return 0;
}
