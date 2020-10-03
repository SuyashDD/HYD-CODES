#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    long long int n;
	    cin >> n;
	    
	    long long int arr[n], ans[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    stack<long long int> s;
	    long long int i = 0, flag = 0;
	    
	    //st.push(0);
	    
	    while (i < n) {
	        if (s.empty()) {
	            s.push(i);
	        } else if (!s.empty() && arr[s.top()] > arr[i]) {
	            s.push(i);
	        } else {
	            while (!s.empty() && arr[s.top()] < arr[i]) {
	                ans[s.top()] = arr[i];
	                s.pop();
	            }
	            s.push(i);
	        }
	        
	        i++;
	    }
	    
	    while (!s.empty()) {
	        ans[s.top()] = -1;
	        s.pop();
	    }
	    
	    for (long long int i = 0; i < n; i++) {
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	    
	}
	
	return 0;
}