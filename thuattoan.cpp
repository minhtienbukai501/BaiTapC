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
	
	int dodaimax = -1;
	int idx = -1;
	int res = INT_MIN;
	for (int i = 1; i < n ;i++){
		int k = i + 1;
		int Tong = 0;
		for (int j = 0; j < k; j++){
			Tong += a[j];
					
		}
		if(Tong > res){
			res = Tong;
			dodaimax = k;
			idx = 0;
		}
		
		for (int j = k; j < n;j++){
			Tong = Tong + a[j] - a[j - k];
			if(Tong > res)
			{
				res =Tong;
				dodaimax = k;
				idx = j - k + 1;
			}
		}
	}
	
	for (int i = idx; i < dodaimax + idx; i++){
		cout << a[i] << " ";
	}

	return 0;
}

