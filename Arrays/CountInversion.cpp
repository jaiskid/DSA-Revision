#include<bits/stdc++.h>
using namespace std;
int countInversionBruteForce(int *arr, int n) {
	int count = 0;
	for (int i = 0 ; i < n ; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				cout << arr[i] << " " << arr[j] << endl;
				count++;
			}
		}
	}
	return count;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	cout << countInversionBruteForce(arr, n);
}