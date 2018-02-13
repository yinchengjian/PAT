#include<cstdio>

int main(){
	const int N =54;
	char mp[5]={'S','H','C','D','J'};
	int start[N+1],end[N+1],next[N+1];
	int k;
	scanf("%d",&k);
	for(int i=1;i<=N;i++){
		start[i]=i;
	} 
	for(int i=1;i<=N;i++){
		scanf("%d",&next[i]);
	}
	for(int step=0;step<k;step++){
		for(int i=1;i<=N;i++){
			end[next[i]] = start[i];
		}
		for(int i=1;i<=N;i++){
			start[i] = end[i];
		}
	}
	for(int i=1;i<=N;i++){
		if(end[i]>0&&end[i]<=13){
			printf("%c%d",mp[0],end[i]);
		}else if(end[i]>13&&end[i]<=26){
			printf("%c%d",mp[1],end[i]-13);
		}else if(end[i]>26&&end[i]<=39){
			printf("%c%d",mp[2],end[i]-26);
		}else if(end[i]>39&&end[i]<=52){
			printf("%c%d",mp[3],end[i]-39);
		}else{
			printf("%c%d",mp[4],end[i]%13);
		}
		if(i<N) printf(" ");
	}
	/*
	for(int i =1;i<=N;i++£©{
		if(i!=1) printf(" ");
		start[i]--;
		printf("%c%d",mp[start[i]/13],start[i]%13+1);
	} 
	*/
	return 0;
}
