//10. Write a function in C to count the frequency of each element of an array
#include<stdio.h>
 void frequency(int a[],int size);
int main()
{
    int a[50],n,p;
    printf("to count the frequency of each element of an array:-\n");
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the array  %d element:-",n);
      for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
      printf("frequency:-");
      frequency(a,n);
      getch();
      return 0;
}
 void frequency(int a[],int size)
{
    int h[100]={0};
    for(int i=1;i<=size;i++)
        h[a[i]]++;
    for(int i=1;h[i]!=0;i++)
       {
        printf("%d-%d",i,h[i]);
        printf("\n");
        }
    }
