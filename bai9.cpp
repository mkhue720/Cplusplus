// code by NMK
#include <bits/stdc++.h>
using namespace std;

string check(string n) {
	int len = n.size();
	int i = len - 2;
	while (i >= 0 and n[i] <= n[i + 1]) i--;
	if (i == -1) return "-1";
	int j = len - 1;
	while (n[j] >= n[i]) j--;
	swap(n[i], n[j]);
	reverse(n.begin() + i + 1, n.end());
	return n;
}
int main() {
	int N;
	cin >> N;
	while (N --) {
		string n;
		cin >> n;
		cout << check(n) << endl;
	}
}
