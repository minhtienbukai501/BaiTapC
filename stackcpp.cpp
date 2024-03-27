#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;cin >> n;
	int a[n];
	
	for (int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	stack<int> st;
	st.push(0);
	
	for (int i = 1; i < n; i++){
		
	}
	
	while(!st.empty()){
		cout << "-1 ";
		st.pop();
	}
	
	
	return 0;
}
