#include<bits/stdc++.h>
using namespace std;
void reverse(int * arr, int n) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
	return;
}

void reverseRecursion(int *arr, int start, int end) {
	if (start >= end)
		return;
	swap(arr[start], arr[end]);
	reverseRecursion(arr, start + 1, end - 1);
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	reverse(arr, n);
	for (auto i : arr)
		cout << i << endl;
	reverseRecursion(arr, 0, n - 1);
	for (auto i : arr)
		cout << i << endl;
}