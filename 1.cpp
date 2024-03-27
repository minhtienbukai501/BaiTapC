#include<iostream>
using namespace std;

long long powmod(long long a, long long b, int c){
	long long lthua = 1;
	if(b % 2 ==  1){
		return lthua *= a;
	}

	if(b != 0){
		return powmod(a, b / 2, c);
	}
	
	return lthua;
	
}

int main(){
	cout << powmod(2, 3, 10e9 + 7);
	
	return 0;
}
