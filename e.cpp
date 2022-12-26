#include <bits/stdc++.h>
using namespace std;
struct Student {
	int id;
	string name;
	int x, y, z;
	bool operator < (const Student &W) const {
		return id < W.id;
	};
};
int main() {
	int n;
	cin >> n;
	vector<Student> a;
	for(int i = 1; i <= n; i ++) {
		int id, x, y, z;
		string name;
		cin >> id >> name >> x >> y >> z;
		if(x < 60 || y < 60 || z < 60) continue;
		a.push_back({id, name, x, y, z});
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); i ++) {
		cout << a[i].id << "," << a[i].name << "," << a[i].x << "," << a[i].y << "," << a[i].z << endl; 
	}
	return 0;
}