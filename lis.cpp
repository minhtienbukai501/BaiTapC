#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	
	stack<int > s;
	
	for (int i = 0 ; i < n; i++){
		if(s.empty()){
			s.push(i);
		} else {
			while(!s.empty() && a[i] <= a[s.top()] ){
				s.pop();
			}
			s.push(i);
		}
	}
	
	cout << s.size();
	
	return 0;
}
