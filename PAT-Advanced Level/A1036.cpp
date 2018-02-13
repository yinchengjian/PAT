#include<cstdio>

struct p{
	char name[15];
	char gender;
	char id[15];
	int goal;
}temp,F,M;

int main(){
	int n;
	F.goal = -1;
	M.goal = 101;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %c %s %d",temp.name,&temp.gender,&temp.id,&temp.goal);
		if(temp.gender=='F') {
			if(temp.goal>F.goal) F = temp;
		} 
		if(temp.gender=='M') {
			if(temp.goal<M.goal) M = temp;
		} 
	}
	if(F.goal==-1){
		printf("Absent\n");
	}else{
		printf("%s %s\n",F.name,F.id);
	}
	if(M.goal==101){
		printf("Absent\n");
	}else{
		printf("%s %s\n",M.name,M.id);
	}
	if(F.goal==-1||M.goal==101){
		printf("NA\n");
	}else{
		if(F.goal-M.goal<=0){
			printf("%d\n",M.goal-F.goal);
		}else{
			printf("%d\n",F.goal-M.goal);
		}
		
	}
	
	return 0;
} 
