#include<cstdio>



double p(double a,double b,double c){
		double temp;
	if(a>b)	temp = a;
	else temp =b;
	if(temp<c) temp=c;
	return temp; 
}

int main(){
	double a,b,c,sum=1;
	char ans[3];
	for(int i=0;i<3;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		sum *=p(a,b,c);	
		if(p(a,b,c)==a) ans[i] = 'W';
		else if(p(a,b,c)==b) ans[i] = 'T';
		else if(p(a,b,c)==c) ans[i] = 'L';
	}
	
	printf("%c %c %c %.2f",ans[0],ans[1],ans[2],(sum*0.65-1)*2);
	return 0;
} 
