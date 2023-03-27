#include<stdio.h>
#include<string.h>
int main()
{
	int i,count;
	char a[100];
	printf("Enter the string without space");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		count=1;
		while(a[i]==a[i+1])
		{
		 count++;
		 i++;	
		}
		printf("%c%d",a[i],count);
	}
	return 0;
}
