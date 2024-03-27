#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	int ChuSo;
	while(n != 0){
		ChuSo = n % 10;
		
		// 123 // chuso = 3;
		// chuso = 2;
		// chuso = 1
		sum += chuso; // sum = sum + chuso;
		
		n /= 10;
	}
	
	cout << "\nN = " << n;
	cout << "\nChuSo = " << ChuSo; 
	
	
	return 0;
}

