#include<stdio.h>
void main()
{
	int i,n,a[10],ecount=0,ocount=0;
	printf("enter the number of elements to be inserted:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		scanf("%d",&a[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("the even numbers in an array are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",a[i]);
			ecount=ecount+1 ;
		}
		printf("\n");
	}
	printf("the odd numbers in an array are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",a[i]);
			ocount=ocount+1;
		}
		printf("\n");
    }
     printf("\n the count of even numbers in an array is %d",ecount);
      printf("\n the count of odd numbers in an array is %d",ocount);

}
