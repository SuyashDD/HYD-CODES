// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    if (n < 3)
	        return 0;
	        
	    unordered_map<long long int, int> um;
	    for (int i = 0; i < n; i++) {
	        um[(arr[i] * arr[i])]++;
	    }
	    
	    for (int i = 0; i < n; i++) {
	        long long int a = arr[i] * arr[i];
	        for (int j = i+1; j < n; j++) {
	            long long int b = arr[j] * arr[j];
	            if (um.find(a+b) != um.end()) {
	                return 1;
	            }
	        }
	    }
	    
	    return 0;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends