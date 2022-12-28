#include "stdio.h"
#include <queue>
#include <iostream>
using namespace std;;
int cnt[30];
int main(){
	FILE *fp;
	if((fp=fopen("huffman.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("huffman.in", "r", stdin);
		freopen("huffman.out", "w", stdout);
	}
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i ++) {
		cnt[s[i] - 'a'] ++;
	}
	priority_queue<int, vector<int>, greater<int> > heap;

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
	res += heap.top();
	printf("%d\n", res);
	
	return 0;
}