#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int l, int r, int S){
	while(l < r){
		if(a[l] + a[r] + s > S){
			r--;
		} else if(a[l] + a[r] + s < S){
			l++;
		} else {
			return true;
		}
	}
	
	return false;
}

int main(){
	int n, S;
	cin >> n >> S;
	int a[n];
	for (int &x: a) cin >> x;
	
	sort(a, a + n);
	int l = 0;
	int r = 0;
	while(l < r){
	
	}
	
	cout << "NO\n";
	
	return 0;
}
