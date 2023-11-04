#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end());
	int n = intervals.size();
	vector<vector<int>> ans;
	for (int i = 0; i < n; i++) {
		if (ans.empty()) {
			ans.push_back(intervals[i]);
		} else {
			vector<int>&v = ans.back();
			int current_ending = v[1];
			if (intervals[i][0] <= current_ending) {
				v[1] = max(current_ending, intervals[i][1]);
			}
			else {
				ans.push_back(intervals[i]);
			}
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector<vector<int>> intervals(n, vector<int>(m, 0));
	for (int i = 0 ; i < intervals.size(); i++) {
		for (int j = 0; j < intervals[i].size(); j++) {
			cin >> intervals[i][j];
		}
	}

	vector<vector<int>> ans = merge(intervals);

	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

}