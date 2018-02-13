#include<cstdio>

int main(){
	int N;
	int count1=0,count2=0;
	int a,a1,b,b1;
	scanf("%d",&N);
	for(int i =0;i<N;i++){
		scanf("%d%d%d%d",&a,&a1,&b,&b1);
		if(a+b == a1&&a+b != b1){
			count2++;
		}else if(a+b == b1&&a+b != a1){
			count1++;
		}
	}
	printf("%d %d",count1,count2);
	
	return 0;
} 
