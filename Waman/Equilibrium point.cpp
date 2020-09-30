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
	    
	    int leftsum = arr[0], rightsum = arr[n-1];
	    
	    int i = 0, j = n - 1, flag = 0;
	    while (i <= j) {
	        if (leftsum == rightsum && i == j) {
	            cout << i + 1 << endl;
	            flag = 1;
	            break;
	        } else if (leftsum < rightsum) {
	            i++;
	            leftsum += arr[i];
	        } else {
	            j--;
	            rightsum += arr[j];
	        }
	    }
	    if (!flag)
	        cout << "-1" << endl;
	}
	
	return 0;
}