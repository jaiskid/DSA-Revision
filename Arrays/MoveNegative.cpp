#include<bits/stdc++.h>
using namespace std;
// Time O(NLogN)
// Space O(1)
void negativeNumber(int *arr, int n) {
	sort(arr, arr + n);
	return;
}

// Time O(N)
// Space O(1)
void rearrange(int *arr, int n) {
	int j = 0;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] < 0) {
			if (i != j) {
				swap(arr[i], arr[j]);
			}
			j++;
		}
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// negativeNumber(arr, n);
	rearrange(arr, n);
	for (auto i : arr)
		cout << i << " ";
}