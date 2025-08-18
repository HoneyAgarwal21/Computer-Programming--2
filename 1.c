#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    if (a>b)
    {
        printf("Largest Number :%d",a);
    }
    else{
        printf("Smallest Number :%d",a);
    }

    if (a<b)
    {
        printf("Largest Number :%d\n",b);
    }
    else{
        printf("Smallest Number :%d",b);
    }
    
}