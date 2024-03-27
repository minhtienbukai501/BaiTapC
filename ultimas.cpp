#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int res = INT_MIN;
	int idx = -1;
	int dodai = -1;
	for (int i = 0; i < n - 1; i++){
		for (int j = i; j < n; j++){
			int Tong = 0;
			for (int k =i; k <= j; k++){
				Tong += a[k];
			}
		}
	}
	


	return 0;
}

