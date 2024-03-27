#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long x){
    for(long long i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return x >= 2;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    queue<long long> q, q2;
    q.push(2LL);
    q.push(3LL);
    q.push(5LL);
    q.push(7LL);
    long long cnt = 1;
    while(cnt < n){
        while(!q.empty()){
            long long x = q.front();
            q.pop();
            if(isPrime(x * 10 + 1)){
                q2.push(x * 10 + 1);
            }
            if(isPrime(x * 10 + 3)){
                q2.push(x * 10 + 3);
            }
            if(isPrime(x * 10 + 5)){
                q2.push(x * 10 + 5);
            }
            if(isPrime(x * 10 + 7)){
                q2.push(x * 10 + 7);
            }
            if(isPrime(x * 10 + 9)){
                q2.push(x * 10 + 9);
            }
        }
        q = q2;
        while(!q2.empty()){
        	q2.pop();
		}
        cnt++;
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
