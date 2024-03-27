#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long pre[100001];

int main(){
	int n;cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	
	}
	
	for (int i = 1; i <= n; i++){
		if(i == 1){
			pre[1] = a[1];
		} else {
			pre[i] =   pre[i - 1] + a[i];
		}
	}
	
 	multimap<int, int> mp;
 	long long ans = 0;
 	for (int i = 1; i <= n; i++){
 		if(mp.find(a[i]) != mp.end()){
 			if(mp[a[i]] == 1){
 				ans = max(ans, pre[i]);
			 } else {
			 	ans = max(ans, pre[i] - pre[mp[a[i]] - 1]);
			 }
 			
		} else {
			mp.insert({a[i], i});
		}
	 }
	
	cout << ans;
	
	return 0;
}
