#include<cstdio>

int main(){
	int n,m,count =0;
	int a[110];
	scanf("%d%d",&n,&m);
	m%=n;
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-m;i<n;i++){
		printf("%d",a[i]);
		count++;
		if(count<n){
			printf(" ");
		}
	}
	for(int i=0;i<n-m;i++){
		printf("%d",a[i]);
		count++;
		if(count<n){
			printf(" ");
		}
	}
	return 0;
} 
