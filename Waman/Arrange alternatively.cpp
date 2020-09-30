#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while (t--) {
	    long int i, min, max, n, m, k = 0;
	    cin >> n;
	    long int a[n];
	    long int j = n - 1;
	    for (i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    m = a[n - 1] + 1;
	   // cout << m << endl;
	    //cout << a[n] << endl;
	    for (i = 0; i < n; i++) {
	        if (i % 2 == 0) {
	            a[i] = a[i] + ((a[j] % m) * m);
	            j--;
	      //      cout << "even =" << a[i] << endl;
	        } else {
	            a[i] = a[i] + ((a[k] % m) * m);
	            k++;
	        //    cout << "odd ="  << a[i] << endl;
	        }
	    }
	    for (i = 0; i < n; i++) {
	        cout << a[i] / m<< " ";
	    }
	    cout << endl;
	}
	return 0;
}