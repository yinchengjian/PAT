#include<cstdio>
struct p{
	char name[15];
	int y,m,d;
}old,young,right,left,temp;

bool less(p a,p b){
	if(a.y!=b.y) return a.y<=b.y;
	else if(a.m!=b.m) return a.m<=b.m;
	else return a.d<=b.d;
}
bool more(p a,p b){
	if(a.y!=b.y) return a.y>=b.y;
	else if(a.m!=b.m) return a.m>=b.m;
	else return a.d>=b.d;
}

void init(){
	old.y = right.y =2014;
	young.y = left.y = 1814;
	old.m = right.m= young.m = left.m =9;
	old.d = right.d= young.d = left.d =6;	
}
int main(){
	init();
	int n,count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d/%d/%d",temp.name,&temp.y,&temp.m,&temp.d);
		if(more(temp,left)&&less(temp,right)){
			count++;
			if(less(temp,old)) old = temp;
			if(more(temp,young)) young = temp;
		}
	}
	if(count==0) printf("0\n");
	else{
		printf("%d ",count);
		printf("%s %s",old.name,young.name);
		
	}
	return 0;
}
