#include <stdio.h>
#include <stdlib.h>

struct Job_type{ 
	int no;  //��ҵ��
	int tb;  //��ҵ��ʼʱ�䣨�֣�
	int tr;  //����ʱ�䣨�֣�
} x;

Job_type job[36];

int n;

void load(){
	int i,j;
	scanf("%d", &n);
	for( i=0; i<n; i++){
		scanf("%d", &job[i].no);
		scanf("%d", &job[i].tb);
		scanf("%d", &job[i].tr);
	}
	
	printf("������ҵ˳��:\n");
	for(i=0;i<n;i++){
		printf("\t%d\t%d\t%d\n",job[i].no,job[i].tb,job[i].tr);
	}
}

void fcfs(){
	//********************************************************
	
	
	
	
	
	
	//========================================================
	
	printf("FCFSsjf���Ƚ��:\n");
	printf("   ��ʼʱ�� ��ҵ�� ����ʱ�� ����ʱ�� ���ʱ�� �ȴ�ʱ�� ��תʱ��\n");
	
	//********************************************************
	
	
	
	
	
	
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("os.in", "r")) != NULL ){
		fclose(fp);  //���ڵĻ���Ҫ�Ȱ�֮ǰ�򿪵��ļ��ص�
		
		freopen("os.in", "r", stdin);
		freopen("os.out", "w", stdout);
	}
	
	load();
	
	fcfs();
	
	return 0;
}