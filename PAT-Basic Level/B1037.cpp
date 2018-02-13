#include<cstdio>

int main(){
	int a1,b1,c1;
	int a2,b2,c2;
	
	scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
	int temp1 = a1*17*29+b1*29+c1;
	int temp2 = a2*17*29+b2*29+c2;
	int temp3= temp2-temp1;
	if(temp3<0){
		printf("-");
		temp3=-temp3;
	}
	printf("%d.%d.%d",(temp3/(17*29)),((temp3%(17*29))/29),temp3%29);
	return 0;
}
