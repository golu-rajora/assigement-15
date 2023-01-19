//5. Write a function to find the first occurrence of adjacent duplicate values in the array Function has to return the value of the element.
#include<stdio.h>
int first_duplicate(int a[],int size);
int main()
{
    int a[50],n,p;
    printf("find the first occurrence of adjacent duplicate values in the array:-\n");
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the array  %d element:-",n);
      for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
      p=first_duplicate(a,n);
      printf("first duplicate value is=%d",p);
      getch();
      return 0;
}
int first_duplicate(int a[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(a[i]==a[j+i])
                return a[i];
        }
    }

}


