#include<cstdio>

int main(){
	int t,count=1;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long res =a+b;
		if(a>0&&b>0&&res<0){
			printf("Case #%d: true\n",count);
		}else if(a<0&&b<0&&res>=0){
			printf("Case #%d: false\n",count);
		}else if(res>c){
			printf("Case #%d: true\n",count);
		}else{
			printf("Case #%d: false\n",count);		
		}
		
		count++;
	}
	
	return 0;
} 
