// code by NMK
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
int fibonacci (int n) {
	int F[1001];
	F[0] = 0; F[1] = 1;
	for (int i = 2; i <= n; i++) {
		F[i] = (F[i - 1] + F[i - 2]) % MAX;
	}
	return F[n];
}

int main() {
	int T;
	cin >> T;
	while (T --) {
		int n;
		cin >> n;
		cout << fibonacci(n) << endl;
	}
}
