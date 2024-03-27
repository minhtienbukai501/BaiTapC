#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b =temp;
}

int partition(int a[], int l, int r)
{
	int x = a[r];
	int i = l - 1;
	
	for (int j = l; j < r; j++)
	{
		if(a[j] <= x)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	
	i++;
	swap(a[i], a[r]);
	return i;
}


void quicksort(int a[], int l, int r)
{
	if(l < r)
	{
		int pivot = partition(a, l, r);
		quicksort(a, l, pivot - 1);
		quicksort(a, pivot + 1, r);
	}
}

int main()
{
	int a[] = {123,12,13,551,321, 12};
	int n = sizeof(a) / sizeof(a[0]);
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	
	
	return 0;
}
