#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="2+2*3+2/2-1";
	char str2[100];
	int left,right,M,A=-1;
	for(int i=0;i<strlen(str1);i++)
	{
		if(str1[i]=='*')
		{
			left=str1[i-1]-'0';
			right=str1[i+1]-'0';
			str2[i]=left*right+'0';
			i++;
		}
		else if(str1[i]=='/')
		{
			left=str1[i-1]-'0';
			right=str1[i+1]-'0';
			str2[i]=left/right+'0';
			i++;
		}
		else
		{
			str2[++A]=str1[i];
		}
	}
	int a=str2[0]-'0',b;
	for(int j=1;j<strlen(str2);j++)
	{
		if(str2[j]=='+')
		{
			b=str2[j+1]-'0';
			a+=b;
			i++;
		}
		else if(str2[j]=='-')
		{
			b=str2[j+1]-'0';
			a-=b;
			i++;
		}
	}
	printf("%d\n",a);
} 