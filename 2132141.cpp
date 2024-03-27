#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int a[1000];
int N;
int used[10] = {0};

void sinh(){
	for (int i = 1; i <= N; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int i){
	for (int j = 1; j <= N; j++){
		if(used[j] == 0){
			used[j] = 1;
			a[i] = j;
			if(i == N){
				sinh();
			} else 
				Try(i + 1);
				
			used[j] = 0;
		}
		
	}
	
}


int main(){
	cin >> N;
	Try(1);
	
	return 0;
}
