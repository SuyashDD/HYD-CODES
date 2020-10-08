#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    int n1, n2;
	    cin >> n1 >> n2;
	    
	    int a1[n1], a2[n2];
	    
	    for (int i = 0; i < n1; i++) {
	        cin >> a1[i];
	    }
	    for (int i = 0; i < n2; i++) {
	        cin >> a2[i];
	    }
	    
	    unordered_map<int, int> um;
	    map<int, int> m;
	    
	    for (auto val : a2) {
	        um[val] = 0;
	    }
	    
	    for (auto val : a1) {
	        if (um.find(val) != um.end()) {
	            um[val]++;
	        } else {
	            m[val]++;
	        }
	    }
	    
	    for (auto val : a2) {
	        int tmp = um[val];
	        while (tmp--) {
	            cout << val << " ";
	        }
	    }
	    for (auto it : m) {
	        int tmp = it.second;
	        while (tmp--) {
	            cout << it.first << " ";
	        }
	    }
	    cout << endl;
	}
	
	return 0;
}