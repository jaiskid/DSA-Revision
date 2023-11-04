#include<bits/stdc++.h>
using namespace std;
//Sorting and returing the K - 1 index element

int KthSmallest(int *arr, int n, int k) {
	sort(arr, arr + n);
	return arr[k - 1];
}
// Priority Queue  
int KthSmallestPriority(int *arr, int k, int n) {
	priority_queue<int> pq;
	for (int i = 0; i < n ; i++) {
		pq.push(arr[i]);
		if (pq.size() > k ) {
			pq.pop();
		}
	}
	return pq.top();
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
	cout << KthSmallest(arr, n, k);
	cout << KthSmallestPriority(arr, k, n);
}