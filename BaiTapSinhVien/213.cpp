#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int solve(int s, int t){
	queue<pair<int, int>> q;
	q.push({s, 0});
	set<int> se;
	se.insert(s);
	
	while(!q.empty()){
		pair<int, int> top = q.front();
		q.pop();
		
		if(top.first == t){
			return top.second;
		} 
		
		if(top.first - 1 == t  || top.first * 2 == t){
			return top.second + 1;
		}
	
	}
	

}

int main(){
	int s, t;
	cin >> s >> t;
	
	cout << solve(s, t);
	
	return 0;
}
