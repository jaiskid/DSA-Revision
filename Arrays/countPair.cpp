#include<bits/stdc++.h>
using namespace std;
int countPairs(int *arr, int n, int k) {
	int count = 0;
	for (int i = 0 ; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == k) {
				count++;
			}
		}
	}
	return count;
}
int countPairsMap(int *arr, int n, int k) {
	unordered_map<int, int> m;
	int ans = 0;
	for (int i = 0 ; i < n; i++) {
		int b = k - arr[i];
		if (m[b]) {
			ans += m[b];
		}
		m[arr[i]]++;
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	cout << countPairs(arr, n, k);
	cout << countPairsMap(arr, n, k);
}