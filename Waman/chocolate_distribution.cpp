#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    int n, m;
	    cin >> n;
	    
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    cin >> m;
	    
	    sort(arr, arr + n);
	    
	    int ans = arr[n - 1] - arr[0];
	    for (int i = 0; i <= n - m; i++) {
	        ans = min(ans, arr[i + m - 1] - arr[i]);
	    }
	    
	    cout << ans << endl;
	    
	}
	
	return 0;
}