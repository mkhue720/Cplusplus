// code by NMK
#include <bits/stdc++.h>
using namespace std;

long long check(long long N) {
	long long max = -1;
	while (N % 2 == 0) {
		max = 2;
		N /= 2;
	}
	
	long long tmp = 3;
	while (tmp * tmp <= N) {
		while (N % tmp == 0) {
			max = tmp;
			N /= tmp;
		}
		tmp += 2;
	}
	
	if (N > 2) max = N;
	return max;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		long long N;
		cin >> N;
		cout << check(N) << endl;
	}
}
