#include <bits/stdc++.h>

bool isPrime(int i)
{
	if(i==0||i==1)
	return false;
	if(i==2)
	return true;
	int x;
	for(x=2;x<=int(sqrt(i))+1;x++)
	{
		if(i%x==0)
		return false;
	}
	return true;
}
int main()
{
	int m,n,count=0,j;
	int a[10005]={0};
	for(int i=0;i<200000;i++)
	{
		if(isPrime(i))
		a[count++]=i;
		if(count==10000)
		break;
	} 
	for(int i=0;i<10000;i++)
	{
		printf("%d ",a[i]);
	} 
	scanf("%d %d",&m,&n);
	for(j=m-1;j<n-1;j++)
	{
		if((j-m+1)>0&&(j-m+1)%10==9)
		printf("%d\n",a[j]);
		else
		printf("%d ",a[j]);
	}
	printf("%d\n",a[j]);
	return 0;
}
