#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
	vector<int> neg, pos, ans;
	for (auto num : nums) {
		if (num < 0) {
			neg.push_back(num);
		}
		else {
			pos.push_back(num);
		}
	}
	for (int i = 0; i < neg.size(); i++) {
		ans.push_back(pos[i]);
		ans.push_back(neg[i]);
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

	rearrange(arr, n);
}