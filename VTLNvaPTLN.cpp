#include<iostream>
using namespace std;


int main ()
{
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	
	
	int x;
	cout << "\nNhap x = "; // x = 5;
	cin >> x;
	int vt = -1;
	for (int i =n - 1; i >= 0; i--)
	{
		if(x == a[i])
		{
			cout << i << " ";
			break;
		}
		
	}
	

	
	
	return 0;
}
