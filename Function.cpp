#include<iostream>
using namespace std;


int main()
{
	
	int Tong = 0;
	int i = 0;
	int n;
	cin >> n;
	
	while(i <= n)
	{
		Tong += i;
		i++;
	}
	
	cout << Tong;
	
	
	return 0;
}
