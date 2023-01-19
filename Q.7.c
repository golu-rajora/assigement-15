//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int count_duplicate(int a[],int size);
int main()
{
    int a[50],n,p;
    printf("to count a total number of duplicate values in the array:-\n");
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the array  %d element:-",n);
      for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
      p=count_duplicate(a,n);
      printf("count duplicate value is=%d",p);
      getch();
      return 0;
}
int count_duplicate(int a[],int size)
{
    int count=0;
    for(int i=0;i<=size-1;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(a[i]==a[j+i])
                count++;
        }
    }
    return count;
}
