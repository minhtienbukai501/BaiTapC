#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	int k = 0, ans = 0;
	for (int i = 1; i < s.length(); i++){
		for (int j = k; j < i;j++){
			if(s[i] == s[j]){
				k = j + 1;
				break;
			}
		}
		ans = max(ans, i - k + 1);
	}
	
	cout << ans;
	
	return 0;
}
