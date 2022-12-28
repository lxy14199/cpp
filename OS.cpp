#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

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

bool cmp(Job_type a, Job_type b) {
	return a.tb < b.tb;
}

void fcfs(){
	//********************************************************
	sort(job, job + n, cmp);
	//========================================================
	
	printf("FCFSsjf���Ƚ��:\n");
	printf("   ��ʼʱ�� ��ҵ�� ����ʱ�� ����ʱ�� ���ʱ�� �ȴ�ʱ�� ��תʱ��\n");
	
	//********************************************************
	int s = 0;
	for(int i = 0; i < n; i ++) {
		printf("\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", s, job[i].no,job[i].tb,job[i].tr, s + job[i].tr, s - job[i].tb, s + job[i].tr - job[i].tb);
		s += job[i].tr;
	}
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