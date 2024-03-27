#include<iostream>
using namespace std;

// 2 1 2 3 5 6 7 

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt =1;
	int idx = 0;
	int res = INT_MIN;
	for (int i = 1; i < n; i++){
		if(a[i] > a[i - 1])
			cnt++;
		else 
		{
			if(res <  cnt){
				res = cnt;
				idx = i - cnt;
			}
			cnt = 1;
		}
	}
	if(res <  cnt){
		res = cnt;
		idx = n - cnt;			
	}
	for (int i = idx; i < idx + res; i++)
		cout << a[i] <<  " ";	
	
	return 0;
}
