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
	    
	    int lmax[n], rmin[n];
	    lmax[0] = arr[0], rmin[n-1] = arr[n-1];
	    
	    for (int i = 1; i < n; i++) {
	        lmax[i] = max(lmax[i-1], arr[i]);
	        //cout << lmax[i] << " ";
	    }
	    for (int i = n - 2; i >= 0; i--) {
	        rmin[i] = min(rmin[i+1], arr[i]);
	    }
	    
	    
	    //cout << endl;
	    int flag = 0;
	    for (int i = 1; i < n - 1; i++) {
	        if (arr[i] >= lmax[i] && arr[i] <= rmin[i]) {
	            flag = 1;
	            cout << arr[i] << endl;
	            break;
	        }
	    }
	    
	    if (!flag) cout << "-1" << endl;
	}
	
	return 0;
}