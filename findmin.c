#include <stdio.h>
float min(float[],int);
int main()
{
    float num[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter a %d number: ",i+1);
        scanf("%f", &num[i]);

    }
    for(int k=0;k<i)
    float mini=min(num,10);
    printf("Smallest number is %.1f",mini);
}
float min(float arr[],int sz)
{
    float small;
    for(int j=1;j<=sz;j++)
    {
        small=arr[0];
        if(small>arr[j])
         small=arr[j];
    
    }
    return small;
}