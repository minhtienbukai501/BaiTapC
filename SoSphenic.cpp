#include<iostream>
#include<cmath>
using namespace std;

int ktSoPheNic(int n)
{
	int S = 1;
	int temp = n;
	for (int i = 2; i <= sqrt(temp);i++)
	{
	
		if(temp % i == 0)
		{
			S *= i;
			if(S == n)
				return 1;
			while(temp % i)
			{
				temp /= i;
			}
		}		
		
	}

	cout << "\nS = " << S;
	if(temp != 1)
		S *= temp;
		
	if(S == n)
		return 1;
	
	return 0;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		int kt = ktSoPheNic(n);
		
		cout << kt << endl;
	}
	
	
	return 0;
}
