// code by NMK
#include <bits/stdc++.h>
using namespace std;

void phantich(int n) {
	for (int i = 2; i * i <= n; i++) {
		int dem = 0;
		while (n % i == 0) {
			dem++;
			n /= i;
		}
		if (dem > 0) cout << i << " " << dem << " ";
	}
	if (n > 1) cout << n << " " << 1 << " ";
	cout << endl;
}

int main() {
	int T;
	cin >> T;
	while (T --) {
		int N; 
		cin >> N;
		phantich(N);
	}
}
