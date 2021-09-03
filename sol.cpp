#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x;
		cin >> x;
		bool checker = false;
		// brute-force approach (try every possibility)
		for (int i = 0; i <= 100; i++) {
			for (int j = 0; j <= 100; j++) {
				if (3 * i + 7 * j == x) {
					checker = true;
					break;
				}
			}
			if (checker) {
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
