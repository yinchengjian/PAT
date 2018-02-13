#include<cstdio>

int main(){
	int a,b,d,num=0;
	int ans[31];
	scanf("%d%d%d",&a,&b,&d);
	int temp = a+b;
	do{
		ans[num++] = temp%d;
		temp/=d;
	}while(temp!=0);
	for(int i=num-1;i>=0;i--){
		printf("%d",ans[i]);
	}
	return 0;
}
