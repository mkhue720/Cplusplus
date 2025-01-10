// code by NMK
#include <bits/stdc++.h>
using namespace std;

long long tinh(string a, long long b, long long M) {
	long long tmp = 0;
	for (char i : a) {
		tmp = (tmp * 10 + (i - '0')) % M;
	}
	long long res = 1;
	tmp = tmp % M;
	while (b > 0) {
		if (b % 2 == 1) res = (res * tmp) % M;
		tmp = (tmp * tmp) % M;
		b /= 2;
	}
	return res;
}

int main() {
	int T;
	cin >> T;
	while (T --) {
		string a;
		long long b, M;
		cin >> a >> b >> M;
		cout << tinh (a, b, M) << endl;
	}
}
