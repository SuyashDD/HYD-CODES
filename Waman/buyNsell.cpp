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
	    
	    int i = 0, j = i + 1, flag = 0;
	    
	    while (i < n) {
	        if (j < n && arr[j - 1] < arr[j]) {
	            flag = 1;
	            while (j < n && arr[j - 1] < arr[j]) {
	                j++;
	            }
	            cout << "(" << i << " " << j-1 << ") ";
	            i = j;
	            j++;
	        } else {
	            i = j;
	            j++;
	        }
	    }
	    if (!flag) cout << "No Profit";
	    cout << endl;
	}
	
	return 0;
}