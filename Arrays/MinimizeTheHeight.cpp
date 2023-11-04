#include<bits/stdc++.h>
using namespace std;

int MinimizeHeights(int *arr, int n, int k) {
	if (n == 1)
		return 0;
	sort(arr, arr + n);
	int diff = arr[n - 1] - arr[0];
	int min_element, max_element;
	for (int i = 1; i < n; i++) {
		if (arr[i] - k < 0)
			continue;
		max_element =  max(arr[i - 1] + k , arr[n - 1] - k);
		min_element = min(arr[0] + k, arr[i] - k);
		diff = min(diff, max_element - min_element);
	}
	return	diff;
}
int main() {
	int k;
	cin >> k;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << MinimizeHeights(arr, n, k);
}