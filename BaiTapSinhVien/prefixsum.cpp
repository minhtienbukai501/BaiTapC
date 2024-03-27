#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long pre[100001] = {0};

int main(){
	int n; cin >> n;
	long long a[n];
	map<long long , vector<int>> mp;
	for (int i =1; i <= n; i++){
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
		mp[a[i]].push_back(i);
	}
	
	long long ans = LLONG_MIN;
	for (auto it : mp){
		int len1 = it.second[0];
		int len2 = it.second[it.second.size() - 1];
		int m = (len1 + len2) / 2;
		int vtMin = len1;
		int vtMax = len2;
		for (int j = 0; j < it.second.size() ;j++){
			if(it.second[vtMax] < it.second[j] && it.second[j] > vtMin){
				vtMax = it.second[j];
			}
			
			if(it.second[vtMin]  > it.second[j] && it.second[j] < vtMax){
				vtMin = it.second[j];
			}
		}
		ans = max(ans, pre[vtMax] - pre[vtMin - 1]);
	}

	cout << ans;
	
	
	
	
	
	
	
	

	
	return 0;
}
