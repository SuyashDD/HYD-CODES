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
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    /*int lmax[n], rmax[n];
	    lmax[0] = arr[0];
	    rmax[n-1] = arr[n-1];
	    
	    for (int i = 1; i < n; i++) {
	        lmax[i] = max(lmax[i-1], arr[i]);
	    }
	    
	    for (int i = n - 2; i >= 0; i--) {
	        rmax[i] = max(rmax[i+1], arr[i]);
	    }
	    
	    int water = 0;
	    for (int i = 0; i < n; i++) {
	        water += min(rmax[i], lmax[i]) - arr[i];
	    }*/
	    
	    int water = 0;
	    int lmax = arr[0], rmax = arr[n-1], i = 0, j = n-1;
	    
	    while (i <= j) {
	        if (arr[i] < arr[j]) {
	            water += min(lmax, rmax) - arr[i];
	            i++;
	            lmax = max(lmax, arr[i]);
	        } else {
	            water += min(lmax, rmax) - arr[j];
	            j--;
	            rmax = max(rmax, arr[j]);
	        }
	    }
	    
	    cout << water << endl;
	}
	
	return 0;
}