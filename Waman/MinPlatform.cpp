#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int arrival[n], dep[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arrival[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> dep[i];
	    }
	    
	    sort(arrival, arrival+n);
	    sort(dep, dep+n);
	    
	    int i = 1, j = 0, platform = 1, count = 1;
	    
	    while (i < n) {
	        if (dep[j] < arrival[i]) {
	            j++;
	            count--;
	        } else {
	            count++;
	            i++;
	        }
	        platform = max(platform, count);
	    }
	    cout << platform << endl;
	}
	return 0;
}