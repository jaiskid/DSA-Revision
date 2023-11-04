#include<bits/stdc++.h>
using namespace std;
int LongestConsecSub(int *arr, int n) {
	sort(arr, arr + n);
	int count = 1;
	int maxLongest = 1;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i + 1] - arr[i] == 1) {
			count++;
			maxLongest = max(count, maxLongest);
		}
		else if (arr[i] == arr[i + 1]) {
			continue;
		}
		else {
			count = 1;
		}
	}
	return maxLongest;
}
int maxLength(unordered_map<int, bool>&mp, int key) {
	int ans = 0;
	while (mp.find(key) != mp.end()) {
		ans++;
		key++;
	}
	return ans;
}
int LongestConsecMap(int *arr, int n) {
	unordered_map<int, bool> mp;
	for (int i = 0 ; i < n; i++) {
		mp[arr[i]] = true;
	}
	for (int i = 0; i < n; i++) {
		if (mp.find(arr[i] - 1) != mp.end()) {
			mp[arr[i]] = false;
		}
	}
	int Longest_length = INT_MIN;
	for (auto i : mp) {
		if (i.second == true) {
			Longest_length = max(Longest_length, maxLength(mp, i.first));
		}
	}
	return Longest_length;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// for (auto i : arr) {
	// 	cout << i << " ";
	// }
	// cout << endl;
	// cout << LongestConsecSub(arr, n) << endl;
	cout << LongestConsecMap(arr, n);

}