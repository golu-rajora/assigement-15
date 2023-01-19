//9. Write a function in C to merge two arrays of the same size sorted in descending order
#include<stdio.h>
void merge(int c[],int size);
int main()
{
    int a[50],b[50],c[100];
    int n;
    printf("  merge two arrays of the same size sorted in descending order:-\n");
    printf("enter the size of the first array:-");
    scanf("%d",&n);
    printf("enter the %d element in the first array:-",n);
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
     printf("same size of the second array:-\n");
    printf("enter the %d element in the second array:-",n);
    for(int i=n;i<n*2;i++)
        scanf("%d",&b[i]);
        for(int i=0;i<n*2;i++)
        {
            if(i<n)
                c[i]=a[i];
                else
                c[i]=b[i];
        }
        printf("merge element of array is:-");
        for(int i=0;i<n*2;i++)
            printf(" %d",c[i]);
            printf("\n descending element in the array is:-");
            merge(c,n*2);
        getch();
        return 0;
}
 void merge(int c[],int size)
 {
     int t;
     for(int i=0;i<size-1;i++)
     {
         for(int j=i+1;j<=size-1;j++)
         {
             if(c[i]<c[j])
             {
                 t=c[i];
                  c[i]=c[j];
                  c[j]=t;
             }
         }
     }
     for(int i=0;i<=size-1;i++)
        printf(" %d",c[i]);
 }
