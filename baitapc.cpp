#include<iostream>
#include<cmath>
using namespace std;


int cheoChinh[401][401] ={0};
int cheoPhu[401][401]={0};

int main(){
	int n;
	cin >>n;
	int a[n][n];
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	for (int i = 1;i <= n; i++){
		for (int j = 1; j <= n; j++){
			cheoChinh[i][j] = a[i][j] + cheoChinh[i - 1][j- 1];
			cheoPhu[i][j] = a[i][j] + cheoPhu[i -1][j  + 1];
		}
	}
	int ans = 0;
	for (int i = n; i >= 1; i--){
		for (int j = n; j >= 1; j--){
			int tmp = min(i, j);
			int h = tmp - i;
			int c = tmp - j;
			for (int k = 0; k < tmp; k++){
				int Tong = 
				ans = max(ans, )
			}
		}
	}
	
	
	return 0;
}
