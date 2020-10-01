#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while (t--) {
	    int n, k, i;
	    cin >> n >> k;
	    
	    int arr[n];
	    
	    for (i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    if (k >= n) {
	        reverse(arr, arr+n);
	    } else {
    	   for (i = 0; i < n - k; i += k) {
    	        reverse(arr+i, arr + i + k);
    	    }
    	    
    	    reverse(arr+i, arr + n);
	    }
	    
	    for (int i = 0; i < n; i++) {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}