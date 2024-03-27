#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int a[1001][1001] = {0};
int main(){

	int n;
	cin >> n;
	vector<pair<int, int>> pa;
	
	cin.ignore();
	for (int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		while(ss >> word){
			int x = stoi(word);
			if(x > i){
				pa.push_back({i, x});
			}
		}
	}
	
	for (auto it : pa){
		cout << it.first << " " << it.second << endl;
	}
		
	return 0;
}
