#include<cstdio>

int main(){
	int n;
	int a[100010]={0};
	int t,q,max=-1,index=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&t,&q);
		a[t]+=q;
		if(a[t]>max) {
			max = a[t];
			index = t;
		}
		
	}
	printf("%d %d",index,max);
	return 0;
} 
