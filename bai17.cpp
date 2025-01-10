// code by NMK
#include <bits/stdc++.h>
using namespace std;

bool ngto(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

bool check(int n) {
	int dem = 0;
	for (int i = 2; i <= n; i++) {
		if (ngto(i) and n % i == 0) {
			dem++;
			n /= i;
			if (n % i == 0) return false;
		}
	}
	return dem == 3;
}

int main() {
	int T;
	cin >> T;
	while (T --) {
		int N;
		cin >> N;
		if (check(N)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
