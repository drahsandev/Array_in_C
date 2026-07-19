#include <stdio.h>
int max(float[],int);
int main()
{
    float num[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter a %d number: ",i+1);
        scanf("%f", &num[i]);

    }
    float maximum=max(num,10);
    printf("Largest number is %.1f",maximum);
}
int max(float arr[],int sz)
{
    float lar=arr[0];
    for(int j=1;j<=sz;j++)
    {
        if(lar<arr[j])
        lar=arr[j];
    }
    return lar;
}