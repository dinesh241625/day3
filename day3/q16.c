#include<stdio.h>
int main()
{
	int N,lastdigit,exceptlast;
	scanf("%d%d",&N);
	lastdigit=N%10;
	exceptlast=N/10;
	printf("lastdigit :%d\n",lastdigit);
	printf("all digit except lastdigit :%d\n",exceptlast);
	return 0;
}
