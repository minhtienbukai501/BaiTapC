#include <bits/stdc++.h>
using namespace std;


void solve(){
	string s1, s2;
	cin >> s1 >> s2;
	
	int demS1[256] = {0}, demS2[256]= {0};
	for (int i = 0; i < s2.length(); i++){
		demS2[s2[i]]++;
	}
	
	int cnt = 0;
	int l = 0;
	int ans = INT_MAX;
	int idx = -1;
	for (int i = 0; i < s1.length(); i++){
		demS1[s1[i]]++;
		if(demS1[s1[i]] <= demS2[s1[i]]){
			cnt++;
		}
		
		if(cnt == s2.length()){
			while((demS1[s1[l]] > demS2[s1[l]] )){
				if(demS1[s1[l]] > demS2[s1[l]])
				{
					demS1[s1[l]]--;
				}
				
				l++;
			}

			if(i - l + 1 < ans){
				ans = i - l + 1;
				idx = l;
			}

		}
	}
	
	if(ans == INT_MAX){
		cout << "-1\n";
	} else 
		cout << s1.substr(idx, ans) << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    

    return 0;
}

