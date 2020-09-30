#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r, long long int &count) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    int i = 0, j = 0, k = l;
    
    for (i = 0; i < n1; i++) {
        L[i] = arr[l+i];
    }
    while (j < n2) {
        R[j] = arr[m + j + 1];
        j++;
    }
    
    i = 0, j = 0;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            count += n1 - i;
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = L[i++];
    }
    
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int r, long long int &count) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, count);
        mergeSort(arr, m+1, r, count);
        merge(arr, l, m, r, count);
    }
}

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
	   long long int count = 0;
	   mergeSort(arr, 0, n - 1, count);
	   cout << count << endl;
	}
	return 0;
}