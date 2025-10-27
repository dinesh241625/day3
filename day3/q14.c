#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	printf("befor swap a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap a=%d,b=%d",a,b);
	return 0;
}
