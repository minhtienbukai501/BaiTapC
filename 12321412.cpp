#include<bits/stdc++.h>
using namespace std;



int main(){
	string s;
	cin >> s;
	bool check = false;
	for (int i = 0; i  <s.length(); i++){
		for (int j = i + 1; j < s.length(); j++){
			if(s[j] < s[i]){
				int vt = j;
				check = true;
				for (int k = vt + 1; k < s.length(); k++){
					if(s[vt] < s[k] &&  s[k] < s[i]){
						vt = k;
					}
				}
				swap(s[vt],s[i]);
				break;
			}
		}
	}
	
	if(check == true){
		cout << s; 
	} else {
		cout <<"-1";
	}
	
	return 0;
}
