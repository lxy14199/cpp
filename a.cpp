#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
const int mod = 1024523;
int main() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	int avg = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		avg += a[i];
	}
	avg = (1.0 * avg) / n + 0.5;
	sort(a.begin() + 1, a.end(), [&](int x, int y) {
		if(x <= avg && y <= avg) {
			return x < y;
		} else if(x > avg && y > avg) {
			return x > y;
		} else {
			return x < y;
		}
	});
	for(int i = 1; i <= n; i ++) cout << a[i] << " ";
	cout << endl;
	return 0;
}