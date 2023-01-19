//3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int a[],int size);
int main()
{
    int a[50],n;
    printf("sort an array of any size:-\n");
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the %d element in the array:-",n);
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
        printf("sorted array is-");
        sort(a,n);
        getch();
        return 0;
}
void sort(int a[],int size)
{
    int t;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i;j<=size-1;j++)
        {
            if(a[i]>a[j+1])
            {
                t=a[i];
                a[i]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<=size-1;i++)
        printf(" %d",a[i]);
}
