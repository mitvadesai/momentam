#include<stdio.h>
main()
{
	int a;
	printf("Enter value : ");
	scanf("%d",&a);
	(a%2==0)?printf("this number is even"):printf("this number is odd");
}