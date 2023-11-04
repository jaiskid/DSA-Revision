#include<bits/stdc++.h>
using namespace std;
int subArrayzeroWorst(int *arr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[i];
			if (sum == 0)
				return 1;
		}
	}
	return 0;
}
int subArraywithPrefixArr(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)
			return 1;
	}
	int prefix[n];
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + arr[i];
	}
	for (auto i : prefix) {
		cout << i << " ";
	}
	for (int i = 0; i < n; i++) {
		if (prefix[i] == 0) {
			return 1;
		}
	}
	unordered_map<int, int> mp;
	for (int i = 0 ; i < n; i++) {
		mp[prefix[i]]++;
	}
	for (auto i : mp) {
		if (i.second > 1) {
			return 1;
		}
	}
	return 0;
}
int subArratwithMapPrefix(int *arr, int n) {
	int sum = 0;
	unordered_map<int, int> mp;
	for (int i = 0 ; i < n; i++) {
		sum = sum + arr[i];
		if (sum == 0 or arr[i] == 0 or mp[sum]) {
			return 1;
		}
		else {
			mp[sum] = 1;
		}
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	int arr[n + 1];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	// cout << subArrayzeroWorst(arr, n);
	// cout << subArraywithPrefixArr(arr, n);
	cout << subArratwithMapPrefix(arr, n);
}