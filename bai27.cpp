// code by NMK
#include <bits/stdc++.h>
using namespace std;

vector<long long> ngto(long long n) {
	vector<bool> check(n + 1, true);
	vector<long long> arr;
	check[0] = check[1] = false;
	for (long long i = 2; i <= n; i++) {
		if (check[i]) {
			arr.push_back(i);
			for (long long j = i * i; j <= n; j += i) check[j] = false;
		}
	}
	return arr;
}

long long dem(long long L, long long R) {
	long long count = 0;
	vector<long long> arr = ngto(sqrt(R));
	for (long long i : arr) {
		if (i * i >= L and i * i <= R) {
			count++;
		}
	}
	return count;
}

int main() {
	int T;
	cin >> T;
	while (T --) {
		long long L, R;
		cin >> L >> R;
		cout << dem(L, R) << endl;
	}
}
