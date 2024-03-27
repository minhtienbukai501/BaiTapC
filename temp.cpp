#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n + 2];
	for (int i = 1; i <= n; i++) cin >> a[i];
	int vet[n + 2];	
	a[0] = INT_MIN;
	a[n + 1] = INT_MAX; 
	int f[n +2];
	for (int i = 0; i <=n + 1; i++){
		vet[i] = 0;
		f[i] = 1;
	}
	for(int i = 1; i <= n + 1; i++){
		for (int j = 0; j < i; j++){
			if(a[j] < a[i]){
				if(f[j]  + 1 > f[i]){
					f[i] = f[j] + 1;
					vet[i] = j;
				}
			}
		}
	}
	
	cout << f[n + 1] - 2 << endl;
	
	int j = n + 1;
	vector<int> LIS;
	int cnt = 0;
	while(j > 0){
		
		LIS.push_back(a[vet[j]]);
		j = vet[j];
		cnt++;
	}
	
	for (int j = LIS.size() - 2; j >= 0; j--){
		cout << LIS[j] << " ";
	}
	
	return 0;
}
