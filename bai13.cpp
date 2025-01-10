// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N --) {
		int n;
		cin >> n;
		bool S[n+5];
		fill (S+2, S+n+1, true);
		for (int i = 2; i <= n; i++) {
			if (S[i]) {
				cout << i << " ";
				for (int j = i * i; j <= n; j=j+i) {
					S[j] = 0;
				}
			}
		}
		cout << endl;
	}
}