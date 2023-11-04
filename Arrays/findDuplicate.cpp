#include<bits/stdc++.h>
using namespace std;
int findDupSorting(int *arr, int n) {
	int duplicate;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
			duplicate = arr[i];
			break;
		}
	}
	return duplicate;
}
int findDupFreq(int *arr, int n) {
	int duplicate;
	int freq[n] = {};
	for (int i = 0 ; i < n; i++) {
		freq[arr[i]]++;
	}
	int count = 0;
	for (auto i : freq) {
		count++;
		if ( i > 1) {
			duplicate = count - 1;
			break;
		}

	}
	return duplicate;
}
int finDuplicateSet(int *arr, int n) {
	int duplicate;
	set<int> s;
	for (int i = 0; i < n; i++) {
		if (s.find(arr[i]) != s.end()) {
			return arr[i];
		}
		s.insert(arr[i]);
	}
	for (auto i : s) {
		cout << i << " ";
	}
	return duplicate;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << findDupSorting(arr, n);
	cout << findDupFreq(arr, n);
	cout << finDuplicateSet(arr, n);
}