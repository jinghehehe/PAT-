#include <bits/stdc++.h>
using namespace std;
int main()
{
	char c1[65],c2[65],c3[65],c4[65];
	char c[7][5]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%s %s %s %s",c1,c2,c3,c4);
	int len1=strlen(c1);
	int len2=strlen(c2);
	int len3=strlen(c3);
	int len4=strlen(c4);
	int i,count=0,y,m;
	for(i=0;i<(len1>len2?len2:len1);i++)
	{
		if(c1[i]==c2[i])
		{
			if(c1[i]>='A'&&c1[i]<='G'&&count==0)
			{
				int x=c1[i]-'A';
				printf("%s ",c[x]);
				count=1;
				continue;
			}
			if((isdigit(c1[i])||c1[i]>='A'&&c1[i]<='N')&&count==1)
			{
				if(isdigit(c1[i]))
				{
					y=c1[i]-'0';
				}
				else
				{
					y=c1[i]-'A'+10;
				}
				break;
			}
		}
	}
	for(i=0;i<(len3>len4?len4:len3);i++)
	{
		if(c3[i]==c4[i])
		{
			if(isalpha(c3[i]))
			{
				m=i;
				break;
			}
		
		}
	}
	printf("%02d:%02d\n",y,m);
	return 0;
} 
