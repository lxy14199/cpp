#include <stdio.h>

void average(){
	//********************************************************
	
	
	
	
	
	
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("average.in", "r")) != NULL ){
		fclose(fp);  //���ڵĻ���Ҫ�Ȱ�֮ǰ�򿪵��ļ��ص�
		
		freopen("average.in", "r", stdin);
		freopen("average.out", "w", stdout);
	}

	average();

	return 0;
}