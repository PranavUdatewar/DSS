#include<stdio.h>
int main()
{
    int a[50],size,i,num,pos;
    printf("Enter the size of array ");
    scanf("%d",&size);
    if(size>a[50])
    {
        printf("Overloded");
    }
    else
    {
        printf("Enter the element ");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }

    }
    printf("\nEnter the number u want to enter ");
    scanf("%d",&num);
    printf("Enter the position u want to enter ");
    scanf("%d",&pos);
    if(pos>size+1)
    {
        printf("Invalid position");
    }
    else
    {
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("Final array");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    }

}
