#include<bits/stdc++.h>
using namespace std;
// Big O(N*N)
int buyandsell(int *arr, int n) {
	int max = INT_MIN;
	for (int i = 0; i < n - 1 ; i++) {
		for (int j = i + 1; j < n; j++) {
			if (max <= arr[j] - arr[i]) {
				max = arr[j] - arr[i];
			}
		}
	}
	return max > 0 ? max : 0;
}
int buyandsellAux(int *arr, int n) {
	int aux[n] = {};
	aux[n - 1] = arr[n - 1];
	for (int i = n - 1; i >= 1; i--) {
		aux[i - 1] = max(arr[i], aux[i]);
	}
	int max = INT_MIN;
	for (int i = 0 ; i < n; i++) {
		if (max <= aux[i] - arr[i]) {
			max = aux[i] - arr[i];
		}
	}
	return max;
}
int buyandsellLinear(int *arr, int n) {
	int min_so_far = INT_MAX;
	int max_profit = INT_MIN;
	for (int i = 0 ; i < n; i++) {
		min_so_far = min(min_so_far, arr[i]);
		max_profit = max(max_profit, arr[i] - min_so_far);
	}
	return max_profit;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << buyandsell(arr, n) << endl;
	cout << buyandsellAux(arr, n) << endl;
	cout << buyandsellLinear(arr, n) << endl;
}