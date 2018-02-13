#include<cstdio>
#include<cstring>

int main(){
	char str[1010];
	int ans[10]={0};
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		for(int j=0;j<10;j++){
			if(str[i]-'0'==j){
				ans[j]++;
			}
		}
	}
	for(int i=0;i<10;i++){
		if(ans[i]!=0){
			printf("%d:%d\n",i,ans[i]);
		}
	}
	return 0;
}
