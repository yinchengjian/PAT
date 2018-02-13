#include<cstdio>
#include<cstring>
//int main(){
//	int num =0;
//	char ans[90][90];
//	while(scanf("%s",ans[num])!=EOF){
//		num++;
//	} 
//	for(int i=num-1;i>=0;i--){
//		printf("%s",ans[i]);
//		if(i>0) printf(" ");
//	}
//	return 0;
//}
//

int main(){
	char str[90];
	char ans[90][90];
	int j=0,h=0;
	gets(str);
	int len =strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]!=' '){
			ans[j][h++] = str[i];
		}else{
			j++;
			h=0;
//			ans[j][h]='\0';
		}
	}
	for(int i=j;i>=0;i--){
		printf("%s",ans[i]);
		if(i>0) printf(" ");
	}
	
	return 0;
}
