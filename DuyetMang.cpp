#include<iostream>
using namespace std;

int p[101];

int main(){
	int n; cin >> n;
	int a[n];
	for (int &x: a) cin >> x;
	
	int vtCuoi = -1;
	for (int i = 0; i < n; i++){
		if(a[i] == 0)
			vtCuoi = i;
	}
	
	
	
	return 0;
}
