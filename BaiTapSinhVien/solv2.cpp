#include<bits/stdc++.h>
using namespace std;

long long pre[100001];

int main(){
	int n; cin >> n;
	map<long long, vector<int>> mp;
	long long a[n];
	for (int i = 1; i <= n; i++){
			cin >> a[i];
			pre[i] = pre[i - 1] + a[i];
			mp[a[i]].push_back(i);
	}

	long long ans = LLONG_MIN;
	
	for (auto it : mp){
		
		if(it.second.size() > 1){
			int vtMin = it.second[0];
			int size = it.second.size();
			int vtMax = it.second[size - 1];
			int mid = (vtMin + vtMax) / 2;
			for (int i = 0; i < it.second.size() - 1; i++){
				if(it.second[i] <= mid){
					if(pre[vtMin] > pre[it.second[i]]){
						vtMin = it.second[i];
					}
				} else {
					if(pre[vtMax] < pre[it.second[i]]){
						vtMax = it.second[i];
					}
				}
			}
			cout << vtMin << " " << vtMax << endl;
			ans = max(ans, pre[vtMax] - pre[vtMin - 1]);
		}
	}
	
	cout << ans;
	 
	
	return 0;
}
