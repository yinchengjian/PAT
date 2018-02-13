#include<cstdio>

int main(){
	int n,b;
	int ans[40],num =0;
	scanf("%d%d",&n,&b);
	bool flag =true;
	do{
		ans[num++] = n%b;
		n/=b;
	}while(n!=0);
	for(int i=0;i<=(num-1)/2;i++){
		if(ans[i]!=ans[num-1-i]){
			flag = false;
			break;
		}
	}
	
	if(flag){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	for(int i=num-1;i>=0;i--){
			printf("%d",ans[i]);
			if(i!=0){
				printf(" ");
			}
		}
	
	return 0;
} 
