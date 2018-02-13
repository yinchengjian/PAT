#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	int bai = n/100;
	for(int i=0;i<bai;i++){
		printf("B");
	}
	int shi = n%100/10;
	for(int i=0;i<shi;i++){
		printf("S");
	}
	int ge = n%10;
	for(int i=1;i<=ge;i++){
		printf("%d",i);
	}
	return 0;
}
