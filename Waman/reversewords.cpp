#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    string s;
	    cin >> s;
	    
	    
	    int i = 0, n = s.length(), j = 0;
	    
	    reverse(s.begin(), s.end());
	    
	    while (j < n) {
	        while (j < n && s[j] != '.')
	            j++;
	        if (j < n)
	            reverse(s.begin() + i, s.begin() + j);
	        else 
	            reverse(s.begin() + i, s.end());
	        j++;
	        i = j;
	    }
	    
	    cout << s << endl;
	}
	
	return 0;
}