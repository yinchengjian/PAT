#include<cstdio>

int main(){
	long long a1,b1,c1;
	long long a2,b2,c2;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&a1,&b1,&c1,&a2,&b2,&c2);
	long long n = a1*17*29+b1*29+c1;
	long long w =	a2*17*29+b2*29+c2;
	long long temp = n+w;
	printf("%lld.%lld.%lld",temp/(17*29),temp%(17*29)/29,temp%29);
	return 0;
} 
