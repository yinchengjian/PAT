#include<cstdio>

struct p{
	char name[15];
	char id[15];
	int goal;
}p,ans_max,ans_min;

int main(){
	int n;
	scanf("%d",&n);
	ans_min.goal =101;
	ans_max.goal = -1;
	for(int i=0;i<n;i++){
		scanf("%s%s%d",p.name,p.id,&p.goal);
		if(ans_min.goal>p.goal) ans_min = p;
		if(ans_max.goal<p.goal) ans_max = p;	
	}
	printf("%s %s\n",ans_max.name,ans_max.id);
	printf("%s %s\n",ans_min.name,ans_min.id);
	return 0;
}
