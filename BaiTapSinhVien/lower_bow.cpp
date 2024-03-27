#include<bits/stdc++.h>
using namespace std;


int upperbound(int a[], int l, int r, int x){
	int vt = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] >= x){
			r = m - 1;
			vt = m;
		} else{
			l = m + 1;
		}
	}
	
	return vt;
}

int lowerbound(int a[], int l , int r, int x){
	int vt=  -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] >= x){
			l = m + 1;
			vt = m;
		} else {
			r = m - 1;
		}
	}
	
	return vt;
}

int main(){
	int x;
	int n;cin >> n >> x;
	int a[n];
	for (int &x: a) cin >> x;
	sort(a, a + n);
	auto it = lower_bound(a, a + n, x);
	cout << "\nlower_bound = " << *it;
	cout << "\nlowerbound  = " << a[lowerbound(a, 0, n- 1, x)];
	
	
	return 0;
}
