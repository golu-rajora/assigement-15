//4. Write a function to rotate an array by n position in d direction
#include<stdio.h>
 void rotate_array(int a[],int size,int d);
int main()
{
    int a[50],d,t;
    printf("function to rotate an array by n position in d direction:-\n");
    printf("size of the array:-");
    int n;
    scanf("%d",&n);
    printf("%d enetr the element:-",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the d element:-");
    scanf("%d",&d);
    printf("\nright rotate of the %d position element is:-",d);
    rotate_array(a,n,d);
    getch();
    return 0;
}
  void rotate_array(int a[],int size,int d)
  {
      int t;
      for(int i=1;i<=d;i++)
      {
          t=a[size-1];
          for(int j=size-1;j>=0;j--)
          {
              a[j]=a[j-1];
          }
          a[0]=t;
      }
      for(int i=0;i<=size-1;i++)
      {
          printf( " %d",a[i]);
      }
  }

