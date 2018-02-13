#include<cstdio>

int main(){
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int time = c2-c1;
	if(time%100>=50){	//ËÄÉáÎåÈë 
		time = time/100+1;
	}else{
		time/=100;
	}		
	/*
	int time = ((c2-c1)+50)/100;
	*/ 
	printf("%02d:%02d:%02d",time/3600,time%3600/60,time%60);

	return 0;
}
