#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
	int n;
	cin >> n;
	vector<vector<int>> edge(n, vector<int>(n, INF));
	for(int i = 0; i < n; i ++) {
		int pre, val;
		cin >> pre >> val;
		edge[i][pre] = val;
		edge[pre][i] = val;
	}
	vector<bool> vis(n);
	vector<int> res;
	int mindis;
	function<void(int, int, int, vector<int>)> dfs = [&](int pos, int tar, int dis, vector<int> path) {
		if(pos == tar && dis < mindis) {
			res = path;
			mindis = dis;
			return ;
			
		} 
		if(dis > mindis) return ;
		vis[pos] = true;
		for(int i = 0; i < n; i ++) {
			if(!vis[i] && edge[i][pos] != INF) {
				path.push_back(i);
				dfs(i, tar, dis + edge[i][pos], path);
				path.pop_back();
			}
		}
		vis[pos] = false;
		return ;
	};
	
	for(int i = 1; i < n; i ++) {
		mindis = INF;
		dfs(0, i, 0, vector<int>(1, 0));
		int m = res.size();
		for(int j = 0; j < m; j ++) {
			cout << char(res[j] + 'A');
			if(j != m - 1) cout << "-";
			else cout << " ";
		}
		cout << mindis << endl;
	}
	return 0;
}