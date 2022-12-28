#include <stdio.h>

void average(){
	//********************************************************
	
	
	
	
	
	
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("average.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("average.in", "r", stdin);
		freopen("average.out", "w", stdout);
	}

	average();

	return 0;
}