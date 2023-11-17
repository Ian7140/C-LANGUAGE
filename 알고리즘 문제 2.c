#include<stdio.h>
#include<stdbool.h>

bool isPrime(int x);
int reverse(int x);

int main()
{
	int n,i,result,integer;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&integer);
		result=reverse(integer);
		if(isPrime(result)) printf("%d ",result);
	}
	return 0;
}

int reverse(int x)
{
	int temp=0;
	while(x)
	{
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	return temp;
}

bool isPrime(int x)
{
	if(x == 1) return false;
	for(int i=2;i<x/2;i++)
	{
		if(x%i == 0) return false;
	}
	return true;
}
