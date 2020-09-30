#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++)
	        cin >> arr[i];
	   
	    int i = n-1, maxnum = arr[n-1];
	    vector<int> ans;
	    
	    for (i = n - 1; i >= 0; i--) {
	        if (arr[i] >= maxnum) {
	            ans.push_back(arr[i]);
	        }
	        maxnum = max(maxnum, arr[i]);
	    }
	    
	    reverse(ans.begin(), ans.end());
	    
	    for (auto val : ans)
	        cout << val << " ";
	    cout << endl;
	}
	return 0;
}