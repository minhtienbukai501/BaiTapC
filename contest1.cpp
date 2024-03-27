#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin >> n;
	
	pair<int, int> p = make_pair(0, 0);

	for (long long i = 2; i <= sqrt(n);i++){
		if(n % i == 0){
			int cnt = 0;
			while(n % i == 0){
			n /= i;
			cnt++;
			}
			
			if(cnt > p.second){
				p = {i, cnt};
			}
		}
		
	}
	
	if(n != 1){
		if(p.second == 0){
			p = {n, 1};
		}
	}
	
	cout << p.first  <<  " " << p.second;
	
	return 0;
}
