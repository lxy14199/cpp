#include "stdio.h"
#include <iostream>
using namespace std;
#define maxint 10000

int n,used[31],map[31][31];

void ini( ){
	int i,j;
	scanf("%d", &n);
	for( i=1; i<=n; i++){
		for( j=1; j<=n; j++){
			scanf("%d", &map[i][j]);
			if( map[i][j] ==0 && i!=j ){
				map[i][j]=maxint;
			}
		}
	}
}

void Dijkstra(){
	//********************************************************
    for(int k = 1; k <= n; k ++) {
    	for(int i = 1; i <= n; i ++) {
    		for(int j = 1; j <= n; j ++) {
    			map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
    		}
    	}
    }
    printf("%d\n", map[2][n - 1]);
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("dist.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("dist.in", "r", stdin);
		freopen("dist.out", "w", stdout);
	}
	
	ini();
	
	Dijkstra();
	
	return 0;
}