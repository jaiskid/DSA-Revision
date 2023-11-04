#include<bits/stdc++.h>
using namespace std;
int UnionCount(int *arrN, int *arrM, int n, int m) {
	set<int> s;
	for (int i = 0 ; i < n ; i++) {
		s.insert(arrN[i]);
	}
	for (int j = 0; j < m ; j++) {
		s.insert(arrM[j]);
	}
	return s.size();
}
int main() {
	int n;
	cin >> n;
	int arrN[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arrN[i];
	}
	int m;
	cin >> m;
	int arrM[m];
	for (int i = 0 ; i < m; i++) {
		cin >> arrM[i];
	}
	cout << UnionCount(arrN, arrM, n, m);
}