#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MOD  1000000007
int a[100006];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n; cin >> n;
	a[0] = 1;
	for (int s = 1; s <= n; s++){
		cout << "\ns = " << s; 
		for (int j = 1; j <= 6; j++){
			if(j <= s){
				a[s] = (a[s] + a[s - j]) % MOD;
				cout << "\na[" << s << "] = " << a[s]; 
			}
		}
	}
	cout << a[n];
	
	return 0;
}
