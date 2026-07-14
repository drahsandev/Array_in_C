#include <stdio.h>
void pass(int[]);
int main()
{
    int num[]={15};
    // for(int i=0;i<=5;i++)
    // {
    //     printf("Enter %d number",i+1);
    //     scanf("%d", &num[i]);
    // }
    printf("After printing 1 value: %d\n",num[0]);
    pass(num);
    printf("Before printing 1 value: %d",num[0]);
    return 0;
}
void pass(int arr[])
{
    
    *(arr+0)=arr[0]+10;
}