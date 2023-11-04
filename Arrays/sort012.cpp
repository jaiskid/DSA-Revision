#include<bits/stdc++.h>
using namespace std;
// Counting method O(N)
void DNF(int *arr, int n) {
	int low = 0;
	int mid = 0;
	int high = n - 1;
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			mid++;
			low++;
		}
		else if (arr[mid] == 1) {
			mid++;
		}
		else {
			swap(arr[mid], arr[high]);
			high--;
		}
	}
	return;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	DNF(arr, n);
	for (auto i : arr)
		cout << i << "	";
	int count_0 = 0;
	int count_1 = 0;
	int count_2 = 0;

	for (auto i : arr) {
		if (i == 0)
			count_0++;
		else if (i == 1)
			count_1++;
		else
			count_2++;
	}

	while (count_0-- > 0)
		cout << 0 << " ";
	while (count_1-- > 0)
		cout << 1 << " ";
	while (count_2-- > 0)
		cout << 2 << " ";

}