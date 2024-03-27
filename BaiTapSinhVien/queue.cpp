#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int maxSumEqualElements(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> lastIndex;
    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < n; ++i) {
        if (lastIndex.find(arr[i]) != lastIndex.end()) {
            int lastIndexValue = lastIndex[arr[i]];
            currentSum = 0;
            for (int j = lastIndexValue + 1; j <= i; ++j) {
                currentSum += arr[j];
            }
            maxSum = max(maxSum, currentSum);
        }
        lastIndex[arr[i]] = i;
    }

    return maxSum;
}

int main() {
	int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
    	int x;cin >> x;
    	a.push_back(x);
	}
    int result = maxSumEqualElements(a);
    cout << "Tong: " << result << endl;

    return 0;
}

