#include<cstdio>
#include<cstring>

int main(){
	char str[85];
	scanf("%s",str);
	int len = strlen(str);
	int n1,n2;
	n1 =(len+2)/3;
	n2 = len-n1*2+2;
	int i;
	for(i=0;i<n1-1;i++){
		printf("%c",str[i]);
		for(int j=0;j<n2-2;j++){
			printf(" ");
		}
		printf("%c\n",str[len-1-i]);
	}
	
	for(int j=0;j<n2;j++){
		printf("%c",str[i+j]);
	}
	return 0;
}
