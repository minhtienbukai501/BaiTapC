#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int ucln(int a, int b)
{
	if(a == b)
		return a;
	if(a > b)
		ucln(a - b, b);
	else 
		ucln(a, b- a);	
	
		
}

int fibonacy(int n)
{
	if(n == 1 || n == 2)
		return 1;
	
	return fibonacy(n - 1) + fibonacy(n - 2);
}

int demSoChuSo(int n)
{
	if(n == 0)
		return 0;
	
	return 1 + demSoChuSo(n / 10);
}


int TimKiem(int a[], int l, int r, int x)
{
	if(l > r)
		return -1;
	else 
	{
		int m = (l + r) / 2;
		if(a[m] == x)
			return m;
		
		if(x > a[m])
			return	TimKiem(a, m + 1, r, x);
		else 
			return	TimKiem(a, l, m, x);
	}
}	

int main()
{	
	string s;
	getline(cin, s);
	
	stringstream ss(s);
	string word;
	int dem = 0;
	while(ss >> word)
	{
		dem++;
	}
	cout << dem;
	
	return 0;
}
