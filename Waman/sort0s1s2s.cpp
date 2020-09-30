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
	    int i = 0, j = n - 1;
	    while (i < j) {
	        while (i < j && arr[i] == 0) i++;
	        while (i < j && arr[j] != 0) j--;
	        if (i < j) {
	            swap(arr[i], arr[j]);
	            i++;
	            j--;
	        }
	    }
	    while (i < n && arr[i] == 0) i++;
	    j = n - 1;
	    while (i < j) {
	        while (i < j && arr[i] == 1) i++;
	        while (i < j && arr[j] != 1) j--;
	        if (i < j) {
	            swap(arr[i], arr[j]);
	            i++;
	            j--;
	        }
	    }
	    for (int i = 0; i < n; i++) {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}