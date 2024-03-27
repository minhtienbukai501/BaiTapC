#include<iostream>
#include<cmath>
using namespace std;


bool kiemTraSoNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			dem++;
		}
	}
	
	if(dem == 2)
		return true;
		
	
	return false;
}


// o(log(n)) // o(sqrt(n))
bool kiemTraSNTCach2(int n)
{
	if(n < 2)
		return false;
	else if(n == 2)
		return true;
	else // n > 2
	{
		if(n % 2 == 0) // là so chan
		{
			return false;
		}
		
		for (int i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
				return false;
		}
	}		
	return true;
}

int main()
{
	for (int i = 1; i <= 100000; i++)
	{
		if(kiemTraSNTCach2(i) == true)
			cout << i << endl;
	}
	
	
	return 0;
}
