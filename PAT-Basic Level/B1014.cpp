#include<cstdio>
#include<cstring>
int main(){
	char str1[70];
	char str2[70];
	char str3[70];
	char str4[70];
	gets(str1);
	gets(str2);
	gets(str3);
	gets(str4);
	int len[4];
	len[0] = strlen(str1);
	len[1] = strlen(str2);
	len[2] = strlen(str3);
	len[3] = strlen(str4);
	bool flag = true;
	
	if(len[0]>len[1]) len[0] = len[1];
	for(int i=0;i<len[0];i++){
		if(str1[i]==str2[i]&&flag){
			if(str1[i]=='A'){
				printf("MON ");
			}else if(str1[i]=='B'){
				printf("TUE ");
			}else if(str1[i]=='C'){
				printf("WED ");
			}else if(str1[i]=='D'){
				printf("THU ");
			}else if(str1[i]=='E'){
				printf("FRI ");
			}else if(str1[i]=='F'){
				printf("SAT ");
			}else if(str1[i]=='G'){
				printf("SUN ");
			}
			flag = false;
		}
		if(str1[i]==str2[i]&&flag==false){
			if(str1[i]=='A'){
				printf("10:");
			}else if(str1[i]=='B'){
				printf("11:");
			}else if(str1[i]=='C'){
				printf("12:");
			}else if(str1[i]=='D'){
				printf("13:");
			}else if(str1[i]=='E'){
				printf("14:");
			}else if(str1[i]=='F'){
				printf("15:");
			}else if(str1[i]=='G'){
				printf("16:");
			}else if(str1[i]=='H'){
				printf("17:");
			}else if(str1[i]=='I'){
				printf("18:");
			}else if(str1[i]=='J'){
				printf("19:");
			}else if(str1[i]=='K'){
				printf("20:");
			}else if(str1[i]=='L'){
				printf("21:");
			}else if(str1[i]=='M'){
				printf("22:");
			}else if(str1[i]=='N'){
				printf("23:");
			}else if(str1[i]=='0'){
				printf("0:");
			}else if(str1[i]=='1'){
				printf("1:");
			}else if(str1[i]=='2'){
				printf("2:");
			}else if(str1[i]=='3'){
				printf("3:");
			}else if(str1[i]=='4'){
				printf("4:");
			}else if(str1[i]=='5'){
				printf("5:");
			}else if(str1[i]=='6'){
				printf("6:");
			}else if(str1[i]=='7'){
				printf("7:");
			}else if(str1[i]=='8'){
				printf("8:");
			}else if(str1[i]=='9'){
				printf("9:");
			}
		}
	}
	if(len[2]>len[3]) len[2] = len[3];
	for(int i=0;i<len[2];i++){
		if(str2[i]==str3[i]){
			if(i<9) printf("0");
			printf("%d",i);
		}
	}
	return 0;
}
