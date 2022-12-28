#include "stdio.h"
int main(){
	int a[1005], n, b[1005], m, i, j, k, t;
	
	FILE *fp;
	if((fp=fopen("sort.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("sort.in", "r", stdin);
		freopen("sort.out", "w", stdout);
	}
	
	scanf("%d%d", &n, &m);//输入数组a和数组b的元素个数n和m
	for( i=0; i<n; i++){//输入数组a的n个元素
		scanf("%d", &a[i]);
	}
	for( i=0; i<m; i++){//输入数组b的m个元素
		scanf("%d", &b[i]);
	}
	//********************************************************
	
	
	
	
	
	
	//========================================================
	
	return 0;
}