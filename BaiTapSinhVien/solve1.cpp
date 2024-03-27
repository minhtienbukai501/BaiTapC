#include<bits/stdc++.h>
using namespace std;

long long pre[100001];

int main(){
	int n; cin >> n;
	long long a[n];
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			pre[i] = pre[i - 1] + a[i];
		}
	
	long long ans = LLONG_MIN;
	for (int i = 1; i <= n; i++){
		for (int j = i + 1;j <=n;j++){
			if(a[i] == a[j]){
				ans = max(ans, pre[j] - pre[i - 1]);
			}
		}
	}
	cout << ans;
	
	return 0;
}
