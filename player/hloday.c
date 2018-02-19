#include <stdio.h>

int main(void)
{
	char ch[10];
	scanf("%s",ch);
	if(ch[0]=='S' || ch[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
