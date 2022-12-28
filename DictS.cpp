#include "stdio.h"

struct dictionary{
	int index;
	char last_char;
}dict[36];

int n;

void ini(){
	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %c", &dict[i].index, &dict[i].last_char);
	}
}

void dfs(int i) {
	if(i == -1) {
		return ;
	}
	dfs(dict[i].index);
	printf("%c", dict[i].last_char);
}

void OutputWord(){
	//********************************************************
	for(int i = 0; i < n; i ++) {
		dfs(i);
		printf("\n");
	}
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("DictS.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("DictS.in", "r", stdin);
		freopen("DictS.out", "w", stdout);
	}
	
	ini();
	
	OutputWord();
	
	return 0;
}