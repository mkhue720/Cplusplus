// code by NMK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T --) {
		long long N, K;
		cin >> N >> K;
		if (K == 0) {
			cout << 0 << endl;
			continue;
		}
		long long chuki = N / K;
		long long tong_chuki = (K * (K - 1)) / 2;
		long long du = N % K;
		long long S = chuki * tong_chuki;
		for (long long i = 1; i <= du; i++) S += i;
		cout << S << endl;
	}
}
