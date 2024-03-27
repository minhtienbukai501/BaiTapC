#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s ="LE Minh Tien";
	stringstream ss(s);
	string chuoi;
	while(ss >> chuoi)
	{
		cout << chuoi << endl;
	}
	
	
	return 0;
}
