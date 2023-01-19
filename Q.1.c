//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int find_max(int a[],int size);
int main()
{
    int a[50],n,z;
    printf(" find the greatest number from the given array of any size:-\n");
    printf("enter a size of the array:-");
    scanf("%d",&n);
    printf("enter %d element:-",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    z=find_max(a,n);
    printf("max element of the array is=%d",z);
    getch();
    return 0;
}
int find_max(int a[],int size)
{
   int max=0;
   for(int i=0;i<=size;i++)
   {
       if(max<a[i])
        max=a[i];
   }
   return max;
}
