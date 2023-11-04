#include<bits/stdc++.h>
using namespace std;
vector<int> commonElements(int *one, int *two, int *three, int n, int m, int o) {
	vector<int> ans;
	unordered_map<int, int> mpone;
	unordered_map<int, int> mptwo;
	unordered_map<int, int> mpthree;
	for (int i = 0 ; i < n; i++) {
		mpone[one[i]]++;
	}
	for (int i = 0 ; i < m; i++) {
		mptwo[two[i]]++;
	}
	for (int i = 0 ; i < o; i++) {
		mpthree[three[i]]++;
	}

	for (int i = 0 ; i < n; i++) {
		if (mpone[one[i]] and mptwo[one[i]] and mpthree[three[i]]) {
			ans.push_back(one[i]);
			mpone[one[i]] = 0;
		}
	}
	return ans;
}
vector<int> commonElementLinear(int *one, int *two, int *three, int n, int m, int o) {
	vector<int> ans;
	int i = 0, j = 0, k = 0;
	while (i < n && j < m && k < o) {
		if (one[i] == two[j] and two[j] == three[k]) {
			if (ans.empty() || ans.back() != one[i]) {
				ans.push_back(one[i]);
			}
			i++;
			j++;
			k++;
		}
		else if (one[i] < two[j]) {
			i++;
		}
		else if (two[j] < three[k]) {
			j++;
		}
		else {
			k++;
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int one[n];
	for (int i = 0; i < n; i++) {
		cin >> one[i];
	}
	int m;
	cin >> m;
	int two[m];
	for (int i = 0; i < m; i++) {
		cin >> two[i];
	}
	int o;
	cin >> o;
	int three[o];
	for (int i = 0; i < o; i++) {
		cin >> three[i];
	}

	auto ans = commonElementLinear(one, two, three, n, m, o);
	for (auto i : ans) {
		cout << i << " ";
	}

}