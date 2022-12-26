#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n;
vector<vector<int>> g;
// 注释内容迪杰斯特拉最短路
// vector<int> dis;
// void dijkstra(int x) {
// 	vector<bool> vis(n + 1, false);
// 	dis[1] = 0;
// 	for(int i = 1; i <= n; i ++) {
// 		int t = INF + 10, p = -1;
// 		for(int j = 1; j <= n; j ++) {
// 			if(!vis[j] && t > dis[j]) {
// 				t = dis[j];
// 				p = j;
// 			}
// 		}
// 		vis[p] = true;
// 		for(int j = 1; j <= n; j ++) {
// 			dis[j] = min(dis[j], dis[p] + g[p][j]);
// 		}
// 	}
// }
int main() {
	cin >> n;
	g = vector<vector<int>>(n + 1, vector<int>(n + 1));
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			cin >> g[i][j];
			if(!g[i][j]) g[i][j] = INF;
		}
	}
	for(int k = 1; k <= n; k ++)
		for(int i = 1; i <= n; i ++)
			for(int j = 1; j <= n; j ++)
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);

	// dis = vector<int>(n + 1, INF);
	// dijkstra(1);
	// cout << dis[n] << endl;
	cout << g[1][n] << endl;

	return 0;
}