#include<cstdio>

int main(){
	int k,m,n,count=0;
	double a;
	double ans[1001]={0}; 
	double p[2001] = {0};
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d%lf",&n,&a);
		ans[n]=a;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d%lf",&n,&a);
		for(int j=0;j<1001;j++){
			p[j+n]+=(ans[j]*a);
		}	
	}
	for(int i=0;i<=2000;i++){
		if(p[i]!=0){
			count++;
		}
	}	
	printf("%d",count);	
	for(int i=2000;i>=0;i--){
		if(p[i]!=0){
			printf(" %d %.1f",i,p[i]);
		}
	}
	
	return 0;
}
