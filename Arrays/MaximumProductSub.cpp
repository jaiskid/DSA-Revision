#include<bits/stdc++.h>
using namespace std;
int maxProductSubWorst(int *arr, int n) {
	int mp = INT_MIN;
	for (int i = 0 ; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int cp = 1;
			for (int k = i; k <= j; k++) {
				cp *= arr[k];
				mp = max(mp, cp);
			}
		}
	}
	return mp;
}
int maxProduct(int *arr, int n) {
	int result = arr[0];
	for (int i = 0; i < n - 1; i++) {
		int cs = arr[i];
		for (int j =  i + 1; j < n; j++) {
			result = max(result, cs);
			cs *= arr[j];
		}
		result = max(result, cs); //Manages n-1 th term
	}
	return result;
}
int maxSubarray(int *arr, int n) {
	int ans = arr[0];
	int maximum = ans;
	int mininum = ans;
	for (int i = 1; i < n; i++) {
		if (arr[i] < 0) {
			swap(maximum, mininum);
		}
		maximum = max(arr[i], maximum * arr[i]);
		mininum = min(arr[i], mininum * arr[i]);
		ans = max(maximum, ans);
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << maxProductSubWorst(arr, n) << endl;
	cout << maxProduct(arr, n) << endl;
	cout << maxSubarray(arr, n) << endl;
	return 0;
}