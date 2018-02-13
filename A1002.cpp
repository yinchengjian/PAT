#include<cstdio>

int main(){
	int k1;
	double a[1100] = {0};
	int n,count=0;
	double temp;
	scanf("%d",&k1);
	for(int i=0;i<k1;i++){
		scanf("%d%lf",&n,&temp);
		a[n]+=temp;
	}
	int k2;
	
	scanf("%d",&k2);
	for(int i=0;i<k2;i++){
		scanf("%d%lf",&n,&temp);
		a[n]+=temp;
	}
	for(int i=0;i<1100;i++){
		if(a[i]!=0){
			count++;
		}
	}	
	printf("%d",count);	
	for(int i=1099;i>=0;i--){
		if(a[i]!=0){
			printf(" %d %.1f",i,a[i]);
		}
	}
	return 0;
}
