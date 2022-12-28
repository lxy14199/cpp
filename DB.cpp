#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
#define SIZE 1000
int n;

struct Grade_table{
	int no_stu;    /* the number of student*/
	char name[10];    /* the name of student*/
	int maths;
	int english;
	int computer;
	
};
struct Grade_table grade[SIZE];

void ini( ){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){  
		scanf("%d %s %d %d %d",&(grade[i].no_stu),grade[i].name,&(grade[i].maths),&(grade[i].english),&(grade[i].computer));
    }
}

bool cmp(Grade_table a, Grade_table b) {
	return a.maths > b.maths;
}

void select1(){
	//********************************************************
	vector<Grade_table> a;
	for(int i = 0; i < n; i ++) {
		if(grade[i].maths < 60)  a.push_back(grade[i]); 
	}
	sort(a.begin(), a.end(), cmp);
	for(int i = 0; i < a.size(); i ++) {
		printf("%d %s %d\n", a[i].no_stu, a[i].name, a[i].maths);
	}
	//========================================================
}

int main(){
	FILE *fp;
	if((fp=fopen("DB.in", "r")) != NULL ){
		fclose(fp);  //存在的话，要先把之前打开的文件关掉
		
		freopen("DB.in", "r", stdin);
		freopen("DB.out", "w", stdout);
	}
	
    ini();
	
	select1();
	
    return 0;
}