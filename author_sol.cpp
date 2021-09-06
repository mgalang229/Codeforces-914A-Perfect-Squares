#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long ans = LLONG_MIN;
	long long n, x;
	cin >> n;
	// For each number, check whether the number is a square or not (by checking factors 
	// smaller than the square root of the number or using sqrt function).
	for (long long i = 0; i < n; i++) {
		cin >> x;
		for (long long j = 0; j * j <= x; j++) {
			if (j * j == x) {
				x = LLONG_MIN;
			}
		}
		ans = max(ans, x);
	}
	cout << ans << '\n';
	return 0;
}
