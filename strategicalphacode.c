#include<stdio.h>
#include<string.h>
int main()
{
	int ul,i,j;
	printf("Enter the total number of elements :");
	scanf("%d",&ul);
	int a[ul];
	char str[ul];
	printf("\nEnter the alpha characters ");
	scanf("%s",str);
	printf("\n Enter the numerical characters");
	for(j=0;j<ul;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("\n");
	printf("the character(s) are/is ");
	for(i=0;i<ul;i++)
	{
		printf("\t%c",str[i]+a[i]);
	}
	return 0;
}
