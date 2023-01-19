//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
 void unique(int a[],int size);
int main()
{
    int a[50],n,p;
    printf("print all unique elements in an array:-\n");
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the array  %d element:-",n);
      for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
      printf("all the unique element is:-");
      unique(a,n);
      getch();
      return 0;
}
 void unique(int a[],int size)
{

    for(int i=0;i<=size-1;i++)
    {
        int s=0;
        for(int j=0;j<=size-1;j++)
        {
            if(a[i]==a[j])
                s++;
        }
        if(s==1)
            printf(" %d",a[i]);
    }

}
