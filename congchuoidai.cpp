#include<iostream>
#include<string>
using namespace std;

string cong(string s1, string s2)
{
	
	
	if(s1.length() > s2.length())
	{
		s2.insert(0,s1.length() - s2.length(), '0');
		
	} else 
	{
		int n  = s1.length() - s2.length();
		s1.insert(0,s2.length() - s1.length() , '0');
		
	}
	
	string result = "";
	int temp = 0;
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		
		
	}
	
	
	return result;
}

int main()
{
	string s1 = "1231244124234324";
	string s2 = "345112";
		
	int x = (int)stoi(s2.c_str());
	
	cout << x;
	
	
	return 0;
}
