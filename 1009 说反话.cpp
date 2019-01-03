#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{

	char c[101];
	string s,sss[101];
	scanf("%[^\n]",c);
	int i,j=0,ding1=0,ding2=0;
	bool flag=true,temp=true;
	s=c;
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]==' ')
		{
			temp=false;
			if(flag)
			{
				ding1=ding2;
				flag=false;
			}
			else
				ding1=ding2+1;
			ding2=i;
			sss[j]=s.substr(ding1,ding2-ding1);
			j++;
		}
	}
	if(temp)//ÅÐ¶ÏÌØÊâÇé¿ö 
	{
		printf("%s\n",c);
	}
	else
	{
		sss[j]=s.substr(ding2+1,strlen(c)-ding2-1);
		j++;
		for(j=j-1;j>0;j--)
		{
			cout<<sss[j]<<' ';
		
		}
			cout<<sss[j]<<endl;
	}

	return 0;
}
