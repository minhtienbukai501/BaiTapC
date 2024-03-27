#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, s;
	cin >> t >> s;
	
	queue<int> q;
	q.push(s -1);
	q.push(2 * s);
	set<int> se;
	se.insert(s - 1);
	se.insert(2 *s);
	while(!q.empty()){
		if(s - 1 == t || 2 * s == t){
			break;
		}
		
		if(se.count(s - 1) == 0 || s - 1 != 0){
			q.push(s - 1);
			se.insert(s - 1);
		} 
		
		if(se.count(2 * s) != 0){
			q.push(2 * s);
			se.insert(2 * s);
		}
		
		q.pop();
	}
	
	cout << se.size();
	
	return 0;
}
