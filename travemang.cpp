#include <iostream>
using namespace std;


int *travemang(int *b, int n)
{
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
	
	return a;
}

void nhapmang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void xuatmang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main() {
    int a[100];
    int n;
    cin >> n;
    nhapmang(a, n);
    
    int *b = travemang(a, n);
	xuatmang(b, n);
	

    return 0;
}
