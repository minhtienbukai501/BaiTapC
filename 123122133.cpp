#include<iostream>
#include<string>
using namespace std;


int main()
{
	
	string s;
	cout << "\nNhap ho ten: ";
	getline(cin, s); // ham nhap chuoi
	
	//	s.length() // lay do dai chuoi 
	int dem  = 0;
	
	if(s[0] != ' ')
	{
		dem++;
	}
	
	for (int i = 0; i < s.length(); i++)
	{
		if(s[i] == ' ' && s[i + 1] != ' ')
		{
			dem++;
		}
	}
	
	cout << "\nCo " << dem << " Tu";
	
	
	
	return 0;
}
