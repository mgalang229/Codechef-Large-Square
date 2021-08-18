#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a;
		cin >> n >> a;
		// find the perfect square before n (or n itself), then multiply a
		cout << (int) sqrt(n) * a << '\n';
	}
	return 0;
}
