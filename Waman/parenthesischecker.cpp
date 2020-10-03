#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while (t--) {
	    
	    string s;
	    cin >> s;
	    
	    stack<char> st;
	    int i = 0, n = s.length(), flag = 0;
	    
	    while (i < n) {
	        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
	            st.push(s[i]);
	        } else if (!st.empty() && ((st.top() == '{' && s[i] == '}') || 
	        (st.top() == '(' && s[i] == ')') || 
	        (st.top() == '[' && s[i] == ']'))) {
	            st.pop();
	        } else {
	            flag = 1;
	            break;
	        }
	        i++;
	    }
	    
	    if (st.empty() && flag == 0) {
	        cout << "balanced" << endl;
	    } else {
	        cout << "not balanced" << endl;
	    }
	    
	}
	
	return 0;
}