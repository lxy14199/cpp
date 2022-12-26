#include <bits/stdc++.h>
using namespace std;
struct Work{
	int id, start, cost;
	bool operator < (const Work &W) const {
		if(start != W.start) return start < W.start;
		return cost < W.cost;
	}
};
int main() {
	int n;
	cin >> n;
	vector<Work> a(n + 1);
	for(int i = 1; i <= n; i ++) {
		int id, start, cost;
		cin >> id >> start >> cost;
		a[i] = {id, start, cost};
	}
	int time = 0;
	sort(a.begin() + 1, a.end());
	for(int i = 1; i <= n; i ++) {
		time += a[i].cost;
		// ......
	}
	return 0;
}