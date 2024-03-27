#include<iostream>
#include<sstream>
using namespace std;


int main(){
	string s;
	rewind(stdin);
	getline(cin, s);

	string word;
	cin >> word;
	
	
	int k = word.length();
	int idx = -1;
	int end = -1;
	for (int i = 0; i < s.length() - k; i++){
		bool check = true;
		
		for (int j = 0; j < k; j++){
			if(s[j] != s[i + j]){
				check = false;		
				break;
			}
		}
		
		
		if(check == true){
			s.erase(i, k);
			i = -1;
		}
	}
	
	cout << s;
	
	return 0;
}
