#include "stdio.h"
int main(){
	int a[1005], n, b[1005], m, i, j, k, t;
	
	FILE *fp;
	if((fp=fopen("sort.in", "r")) != NULL ){
		fclose(fp);  //���ڵĻ���Ҫ�Ȱ�֮ǰ�򿪵��ļ��ص�
		
		freopen("sort.in", "r", stdin);
		freopen("sort.out", "w", stdout);
	}
	
	scanf("%d%d", &n, &m);//��������a������b��Ԫ�ظ���n��m
	for( i=0; i<n; i++){//��������a��n��Ԫ��
		scanf("%d", &a[i]);
	}
	for( i=0; i<m; i++){//��������b��m��Ԫ��
		scanf("%d", &b[i]);
	}
	//********************************************************
	
	
	
	
	
	
	//========================================================
	
	return 0;
}