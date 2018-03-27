#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter The Number:");
    scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
         if(n%i == 0)
         {
             count++;
         }
     }
     if (count == 2)
     {
         printf("The Number %d is a Prime Number.",n);
     }
     else 
     {
         printf("The Number %d is Not A Prime.",n);
     }
}
