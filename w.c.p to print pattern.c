/*W.C.P to print the following pattern(user defind)
      4    
    4 3 4
  4 3 2 3 4
4 3 2 1 2 3 4        */
#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter no of rows:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	for(k=1;k<i;k++)
	{
		printf(" ");
	}
	for(j=n;j>=i;j--)
	{
		printf("%d",j);
	}
	for(j=i+1;j<=n;j++)
	{
		printf("%d",j);
	}
		printf("\n");
}
return 0;
}
