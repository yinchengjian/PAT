#include<cstdio>
#include<cstring>
int main(){
	char str[110];
	char ans[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int change[10],num=0;
	scanf("%s",str);
	int len = strlen(str);
	int sum = 0;
	for(int i=0;i<len;i++){
		sum+=str[i]-'0';
	}
	while(sum!=0){
		change[num++] = sum%10;
		sum/=10;	
	}
	for(int i=num-1;i>=0;i--){
		printf("%s",ans[change[i]]);
		if(i>0){
			printf(" ");
		}
	}
	return 0;
} 
