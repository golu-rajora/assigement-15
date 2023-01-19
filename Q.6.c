//6. Write a function in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
void reverse_order(int a[],int size);
int main()
{
    int a[]={10,12,7,25,34,46,78,95,23,11};
    printf("to read n number of values in an array and display it in reverse order:-\n");
    printf("array element is-");
    for(int i=0;i<=9;i++)
    printf(" %d",a[i]);
    printf("\nreverse order element is-");
    reverse_order(a,10);
    getch();
    return 0;
}
 void reverse_order(int a[],int size)
 {
     for(int i=9;i>=0;i--)
     printf(" %d",a[i]);

 }
