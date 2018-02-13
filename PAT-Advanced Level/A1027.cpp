#include<cstdio>
#include<cstring>
//char change(int a){
//	char c;
//	if(a==10){
//		c = 'A';
//	}else if(a==11){
//		c='B';
//	}else if(a==12){
//		c='C';
//	}else if(a==0){
//		c='0';
//	}else if(a==1){
//		c='1';
//	}else if(a==2){
//		c='2';
//	}else if(a==3){
//		c='3';
//	}else if(a==4){
//		c='4';
//	}else if(a==5){
//		c='5';
//	}else if(a==6){
//		c='6';
//	}else if(a==7){
//		c='7';
//	}else if(a==8){
//		c='8';
//	}else if(a==9){
//		c='9';
//	}
//	return c;
//}

char radix[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};

int main(){
	int r,g,b;
	scanf("%d%d%d",&r,&g,&b);
//	printf("#%c%c%c%c%c%c",change(r/13),change(r%13),change(g/13),change(g%13),change(b/13),change(b%13));
	printf("#%c%c%c%c%c%c",radix[r/13],radix[r%13],radix[g/13],radix[g%13],radix[b/13],radix[b%13]);
	return 0;
}
