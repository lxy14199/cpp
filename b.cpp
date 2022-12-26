#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	s = " " + s;
	vector<int> cnt(26, 0);
	for(int i = 1; i <= n; i ++) {
		cnt[s[i] - 'a'] ++;
	}
	priority_queue<int, vector<int>, greater<int>> heap;
	for(int i = 0; i < 26; i ++) {
		if(cnt[i]) {
			heap.push(cnt[i]);
		}
	}
	int res = 0;
	while(heap.size() > 1) {
		int t1 = heap.top(); heap.pop();
		int t2 = heap.top(); heap.pop();
		res += t1 + t2;
		heap.push(t1 + t2);
	}
	cout << res << endl;

	return 0;
}	