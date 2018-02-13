#include<cstdio>
struct p{
	long long id;
	
	int b;
}; 

int main(){
	int n,a,b;
	long long id;
	p p1[1100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld%d%d",&id,&a,&b);
		p1[a].id = id;
		p1[a].b =b;
	}
	int m,seat;
	scanf("%d",&m);
	for(int i =0;i<m;i++){
		scanf("%d",&seat);	
		printf("%lld %d\n",p1[seat].id,p1[seat].b);
	}
	
	
	
	return 0;
} 
