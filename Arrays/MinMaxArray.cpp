#include<bits/stdc++.h>
using namespace std;
// Return by sorting an array
struct Pair {
	int min;
	int max;
};
Pair getMaxMin(int *arr, int n) {
	sort(arr, arr + n);
	Pair minmax;
	minmax.min = arr[0];
	minmax.max = arr[n - 1];
	return minmax;
}
void MaxMin(int *arr, int n) {
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < n ; i++) {
		if ( arr[i] > max) {
			max = arr[i];
		}
		if ( arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min << " " << max << endl;
}
int main () {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	MaxMin(arr, n);
	Pair minmax = getMaxMin(arr, n);
	cout << minmax.min << " " << minmax.max << endl;
}