#include<cstdio>

struct pol{
	char id[20];
	int h1,h2;
	int m1,m2;
	int s1,s2;
}p,max,min;

bool is(pol a,pol b){
	if(a.h1!=b.h1) return a.h1<=b.h1;
	else if(a.m1!=b.m1) return a.m1<=b.m1;
	else return a.s1<=b.s1;	
}

bool is_w(pol a,pol b){
	if(a.h2!=b.h2) return a.h2>=b.h2;
	else if(a.m2!=b.m2) return a.m2>=b.m2;
	else return a.s2>=b.s2;	
}
int main(){
	max.h2=0;
	max.m2 =0;
	max.s2 =0;
	min.h1 =23;
	min.m1 =59;
	min.s1 =59;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d:%d:%d %d:%d:%d",p.id,&p.h1,&p.m1,&p.s1,&p.h2,&p.m2,&p.s2);
		if(is(p,min)) min =p;
		if(is_w(p,max)) max =p;
	} 
	
	printf("%s %s",min.id,max.id);
	return 0;
}
