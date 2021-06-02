#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		bool checker = false;
		for (int i = 1; i + 1 < n; i++) {
			// check if there exists an element wherein the current element is greater
			// than the previous and next element
			if (p[i] > p[i - 1] && p[i] > p[i + 1]) {
				// if it's true, then print the previous, current, and next indices (all + 1)
				cout << "YES\n" << i << " " << i + 1 << " " << i + 2;
				// set 'checker' to true
				checker = true;
				// break the loop
				break;
			}
		}
		if (!checker) {
			// if such indices do not exist, then print NO
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
