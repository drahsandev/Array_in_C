#include <stdio.h>
// void print(int[],int);
int main()
{
    int num[5];
    for(int i=0;i<=5;i++)
    {
        printf("Enter %d number",i+1);
        scanf("%d", &num[i]);
    }
    for(int j=0;j<=5;j++)
    printf("%u\n5", &num[j]);

    return 0;
}