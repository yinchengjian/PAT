#include<cstdio>

int p(int a,int da){
	int yushu;
	int pa =0;
	do{
		yushu = a%10;
		if(yushu==da){
			
			pa = pa*10+da;
		}
		a/=10;
	}while(a!=0);
	return pa;	
}

int main(){
	int a,da,b,db;
	scanf("%d%d%d%d",&a,&da,&b,&db);
	int A = p(a,da);
	int B = p(b,db);
	printf("%d",A+B);
	
	return 0;
}
