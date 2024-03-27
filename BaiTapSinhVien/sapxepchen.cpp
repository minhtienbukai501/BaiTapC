#include<iostream>
using namespace std;

void hoanvi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int n;cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	
	for (int i = 0; i < n; i++){
		int vtMin = i;
		for (int j = i + 1; j < n; j++){
			if(a[j] < a[vtMin]){
				vtMin = j;
			}
		}
		
		hoanvi(a[i], a[vtMin]);
	}
	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
