#include <stdio.h>
int main()
{
    int num[5];
    for(int i=0;i<=5;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d", &num[i]);
    }
    for(int j=0;j<=5;j++)
    printf("%d\n5", *(num+j));

    return 0;
}