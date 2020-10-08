#include <bits/stdc++.h>
using namespace std;

bool sortby(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    unordered_map<int, int> um;
	    vector<pair<int, int>> arr2;
	    
	    for (auto val : arr) {
	        um[val]++;
	    }
	    
	    for (auto val : arr) {
	        arr2.push_back({val, um[val]});
	    }
	    
	    sort(arr2.begin(), arr2.end(), sortby);
	    
	    for (auto val : arr2) {
	        cout << val.first << " ";
	    }
	    
	    cout << endl;
	}
	
	return 0;
}