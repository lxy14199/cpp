#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct Job_type{ 
	int no;  //作业号
	int tb;  //作业开始时间（分）
	int tr;  //运行时间（分）
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
	
	printf("输入作业顺序:\n");
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
	
	printf("FCFSsjf调度结果:\n");
	printf("   开始时间 作业号 到达时间 运行时间 完成时间 等待时间 周转时间\n");
	
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
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("os.in", "r", stdin);
		freopen("os.out", "w", stdout);
	}
	
	load();
	
	fcfs();
	
	return 0;
}