#include<iostream>
using namespace std;



int main()
{
	int n;
	do {
		cout << "\nNhap n = ";
		cin >> n;
		if(n < 0){
			cout << "\nNhap n > 0: ";
		}
	} while(n < 0);
	
	
	cout << "\nN = " << n;
	
	return 0;
}



