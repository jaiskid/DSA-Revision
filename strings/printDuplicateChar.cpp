#include<bits/stdc++.h>
using namespace std;
void printDuplicateChar(string s) {
	unordered_map<char, int> count;
	for (int i = 0 ; i < s.size(); i++) {
		count[s[i]]++;
	}
	for (auto i : count) {
		if (i.second > 1)
			cout << i.first << " ";
	}
}
void viaSorting(string s) {
	sort(s.begin(), s.end());
	for (int i = 0 ; i < s.size(); i++) {
		int count = 1;
		while (i < s.size() - 1  && s[i] == s[i + 1]) {
			count++;
			i++;
		}
		if (count > 1) {
			cout << s[i] << " ";
		}
	}
}
int main() {
	string s;
	cin >> s;
	printDuplicateChar(s);
	viaSorting(s);
}