#include<bits/stdc++.h>
using namespace std;
int CountMorethanNK(int *arr, int n, int K) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}
	int val = n / K;
	int count = 0;
	for (auto i : mp) {
		if (i.second > val) {
			count++;
		}
	}
	return count;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int K;
	cin >> K;
	cout << CountMorethanNK(arr, n, K);
}