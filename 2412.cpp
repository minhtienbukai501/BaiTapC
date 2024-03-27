#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int cnt = 0;
	int dao = 0;
	int sochuso = log10(n) + 1;

	while(n != 0){
		int ChuSo = n % 10;
		
		dao += ChuSo * pow(10, sochuso);
		sochuso--;
		n /= 10;
	}
	cout << dao;
	
	
	return 0;
}
