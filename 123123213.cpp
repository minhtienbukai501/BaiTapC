#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int check[26] = {0};
	for (int i = 0; i < s.length(); i++){
		check[s[i] - 'a']++;
	}
	
	
	for (int i = 0; i < s.length(); i++){
		for (int j = 25; j >= 0; j--){
			if(check[j]){
				if(s[i] - 'a' < j){
					check[s[i] - 'a']--;
					break;
				} else if(s[i] - 'a' == j){
					cout << s[i];
					check[j]--;
					break;
				}
			}
		}
	}
	
	return 0;
}
