#include<cstdio>

int main(){
	int n,m;
	char a;
	scanf("%d %c",&n,&a);
	for(int i=0;i<n;i++){
		printf("%c",a);
	}
	printf("\n");
	if(n%2==1){
		m = n/2-1;
	}else{
		m = n/2-2;	
	}
	for(int i=0;i<m;i++){
		printf("%c",a);
		for(int i =0;i<n-2;i++){
			printf(" ");
		}	
		printf("%c\n",a);
	}
	for(int i=0;i<n;i++){
		printf("%c",a);
	}
		printf("\n");
	return 0;
}
