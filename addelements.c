#include <stdio.h>
void add(float arry[],int x)
{
    float sum=0;
    for(int k=0;k<=x;k++)
    {
        sum+=arry[k];
    }
    printf("Sum of arry elements is %.2f",sum);
}
int main()
{
    float num[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%f", &num[i]);
    }
    add(num,10);
    return 0;
}