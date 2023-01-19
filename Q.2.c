//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int find_small(int a[],int size);
int main()
{
    int a[50],n,z;
    printf(" find the smallest number from the given array of any size:-\n");
    printf("enter a size of the array:-");
    scanf("%d",&n);
    printf("enter %d element:-",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    z=find_small(a,n);
    printf("smallest element of the array is=%d",z);
    getch();
    return 0;
}
int find_small(int a[],int size)
{
   int small=a[0];
   for(int i=0;i<size;i++)
   {
        if(small>a[i])
        small=a[i];
   }
   return small;
}

