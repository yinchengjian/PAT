#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int a[100005];
	int dis[100005];
	int sum=0,n,m,left,right;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		dis[i] = sum;
	}
	scanf("%d",&m);
	for(int i =0;i<m;i++){
		scanf("%d%d",&left,&right);
		if(left>right){
			swap(left,right);
		}	
		int temp = dis[right-1]-dis[left-1];
		printf("%d\n",min(temp,sum-temp));
	}
	
	return 0;
}
