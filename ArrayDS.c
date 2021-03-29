#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("Enter the size of the array ");
    scanf("%d",&size);

    if(size>a[50])
       {
            printf("Overloded");
       }
    else
    {
    printf("Enter the element=");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Element in array ");
        for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
    }
}
