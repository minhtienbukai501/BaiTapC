#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long pre[100001];

long long  solve1(long long a[], int n){
	long long ans = LLONG_MIN;
	for (int i = 1; i <= n; i++){
		for (int j = i + 1;j <=n;j++){
			if(a[i] == a[j]){
				ans = max(ans, pre[j] - pre[i - 1]);
			}
		}
	}
	
	return ans;
}

long long solve2(long long a[], int n){
	map<long long, vector<int>> mp;
	for (int i = 1; i <= n; i++){	
		mp[a[i]].push_back(i);
	}	
	
	long long ans = LLONG_MIN;
	for (auto it : mp){
		int len1 = it.second[0];
		int len2 = it.second[it.second.size() - 1];
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
	 
	return ans;
}


void xuatmang(long long a[], int n){
	for (int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	srand(time(0));
	while(1){
		int n; 
		n = 1 + rand() % 100;
		long long a[n];
		for (int i = 1; i <= n; i++){
			a[i] = -10000000 + rand() % 20000000;
			pre[i] = pre[i - 1] + a[i];
		}
		
		long long so1 = solve1(a, n);
		long long so2 = solve2(a, n);
		if(so1 == so2){
			cout << "TRUE";
		} else {
			cout << "FAIL" << endl;
			
			cout << "solve 1 = " << so1 << endl;
			cout << "solve 2 = " << so2 << endl;
			cout << "n = " << n << endl;
			xuatmang(a,  n);
			break;
		}
		
		cout << endl;
	}


		
	return 0;
}
