#include<cstdio>
#include<cstring>
int main(){
	bool flag = true;

	int n;
	char str[20];
	int w[20] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char ans[15]={'1','0','X','9','8','7','6','5','4','3','2'};
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",str);
		int i,sum=0;
		for(i=0;i<17;i++){
			if(!str[i]>'0'&&str[i]<'9'){
				break;
			}
			sum+=w[i]*(str[i]-'0');
		}
		if(i<17){
			flag = true;
			printf("%s\n",str);
		}else {
			if(ans[sum%11]!=str[17]){
			flag = false;
			printf("%s\n",str);
			}
		}
	}	
	if(flag){
		printf("All passed");
	}
	
	return 0;
}
