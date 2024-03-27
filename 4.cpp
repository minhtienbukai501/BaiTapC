#include<iostream>
#include<set>
using namespace std;

void solve(){
	string s;
	cin >> s;
	set<int> se;
	for (int i = 0; i < s.length(); i++){
		se.insert(s[i]);
	}
	
	int cnt[256] = {0};
	int l = 0, dem = 0;
	int res = INT_MAX;
	int idx = INT_MAX;
	for (int i = 0; i < s.length(); i++){
		cnt[s[i]]++;
		if(cnt[s[i]] == 1){
			dem++;
		}
		
		if(dem == se.size()){
			cout << "\ndem = " << dem;
			cout << "\nsize = "  << se.size();
			while(cnt[s[l]] > 1 ){
				cnt[s[l]]--;
				l++;
			}
			
			if(res >  i - l + 1){
				res = i - l + 1;
				idx = l;
			}
		}
	}
	cout << s.substr(idx, res);
}


int main(){
	
	solve();
	
	return 0;
}
