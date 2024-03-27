#include<bits/stdc++.h>
using namespace std;
#define N 2 * 1000000

int a[N + 1];

int main(){
	
	freopen("luabo.inp","r", stdin);
	freopen("luabo.out","w", stdout);
	int n;cin >> n;
	for (int i = 0; i < n; i++){
		int x;cin >> x;
		a[1000000 + x] += 1;
	}
	
	for (int i = 0; i <= N; i++){
		if(a[i] != 0){
			cout << i - 1000000 << " " << a[i] << endl;
		}
		
	}
	
	
	return 0;
}
