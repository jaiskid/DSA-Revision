#include<bits/stdc++.h>
using namespace std;
void Cyclic(int *arr, int n) {
	int last_element = arr[n - 1];
	for (int i = 1; i < n; i++) {
		arr[n - i] = arr[n - i - 1];
	}
	arr[0] = last_element;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	Cyclic(arr, n);
	for (auto i : arr)
		cout << i << " ";
}