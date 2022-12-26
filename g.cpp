#include <iostream>
using namespace std;
int main() {
	bool flag = true;
	int sum = 0;
	for(int i = 1; i <= 3; i ++) {
		for(int j = 1; j <= 5; j ++) {
			int x;
			cin >> x;
			if(x < 0 || x > 100) flag = false;
			else sum += x;
		}
	} 
	if(flag) cout << -1 << endl;
	else cout << sum / 15 << endl;
	return 0;
}