#include<iostream>
#include<string>
using namespace std;


bool isChu(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
// s.substr(Tu vi tri nao, Lay Bao Nhieu Ky Tu);
int main()
{
	string s = "123";
	int x = stoi(s);
	cout << x;
	
	
	return 0;
}
