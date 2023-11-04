#include<bits/stdc++.h>
using namespace std;
int KadaneAlgo(int *arr, int n) {
	int cs = 0;
	int ms = INT_MIN;
	for (int i = 0; i < n; i++) {
		cs += arr[i];
		ms = max(cs, ms);
		if (cs < 0) {
			cs = 0;
		}
	}
	return ms;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << KadaneAlgo(arr, n);
}
