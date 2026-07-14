#include <stdio.h>
// void change(int [],int);
int main()
{
    int num[4];
    int *ptr[4];
    for(int i=0;i<=3;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d", &num[i]);
    }
    for(int j=0;j<4;j++)
    {
         ptr[j] = &num[j];
    }
    for(int k=0;k<4;k++)
    {
        printf("%u\n",ptr[k]);
    }
    *ptr[1]=*ptr[1]+5;
    printf("After changing the value of 2nd element: %d\n",num[1]);
    return 0;
}