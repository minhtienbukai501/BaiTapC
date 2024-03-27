#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
#include<map>

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	map<string , int> mp;
	while(T--)
	{
		string s;
		getline(cin, s);
	
		string word;
		vector<string> list_word;
		
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = tolower(s[i]);
		}
		
		stringstream ss(s);
		while(ss >> word)
		{
			list_word.push_back(word);
		}
		
		string res = "";
		res += list_word[list_word.size() - 1];
		for (int i = 0; i <list_word.size() - 1; i++)
		{
			res += list_word[i][0];
		} 
		
		if(mp[res] == 0)
		{
			cout << res  << "@gmail.com" << endl;
		
		}else 
		{
			cout << res << mp[res] + 1 << "@gmail.com" << endl;
		}
		mp[res]++;
		
	}

	
	
	return 0;
}
