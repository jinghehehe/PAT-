#include <bits/stdc++.h>
const int maxn= 100005;
int main()
{
	
	int i,n,m[maxn],temp=1;
	int A[5]={0},count=0;
	int s[5]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m[i]%5==0)
		{
			if(m[i]%10==0)
			{
				A[0]+=m[i];
				s[0]=1;
			}
		}
		if(m[i]%5==1)
		{
		
			A[1]+=temp*m[i];
			temp=-1*temp;
				s[1]=1;
		}
		if(m[i]%5==2)
		{
		
			A[2]++;
				s[2]=1;
		}
		if(m[i]%5==3)
		{
		
			A[3]+=m[i];
			count++;
				s[3]=1;
		}
		if(m[i]%5==4)
		{
		
			A[4]=A[4]>m[i]?A[4]:m[i];
				s[4]=1;
		}
	}

	
	for(i=0;i<5;i++)
	{
		if(s[i]==1)
		{
			if(i==3)
			printf("%.1f ",(double)A[3]/(double)count);
			else if(i==4)
			printf("%d\n",A[4]);
			else 
			printf("%d ",A[i]);
		}
		else
		{
			if(i==4)
			printf("N\n");
			else
			printf("N ");
		}
	}
	
	
	return 0;
}
