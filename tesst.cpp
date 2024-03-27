#include<iostream>
#include<time.h>
#include<ctime>
#include<windows.h>
using namespace std;

int partition(int a[], int l, int r){
	int i = l;
	int pivot = a[r];
	for (int j = l; j < r; j++){
		if(a[j] <= pivot){
			swap(a[j], a[i]);
			i++;
		}
	}
	
	swap(a[i], a[r]);
	return i;
}

void quicksort(int a[], int l, int r){
	if(l >= r)
		return;
	int i = partition(a, l , r);
	quicksort(a, l, i - 1);
	quicksort(a, i + 1, r);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++){
		a[i] = rand() % 500;
	}
	
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
