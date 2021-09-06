#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> root(n, 0);
	// calculate the square root of every number in the sequence
	for (int i = 0; i < n; i++) {
		root[i] = (int) sqrt(a[i]);
	}
	// check if the squared 'root[i]' produces the exact value of 'a[i]'
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (root[i] * root[i] != a[i]) {
			mx = max(mx, a[i]);
		}
	}
	cout << mx << '\n';
	return 0;
}
