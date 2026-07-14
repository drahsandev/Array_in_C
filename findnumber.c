#include <stdio.h>
void find(float arry[],int x)
{
    int s;
    int up=0;
    printf("Enter GPA: ");
    scanf("%d", &s);
    for(int j=0;j<=x;j++)
    {
        if(s==arry[j])
        {
            up++;
        }
    }
    if(up=0)
    {
        printf("Number Not found");
    }
    else
    {
        printf("Number founded");
    }
    return;
    
}
int main()
{
    float gpa[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter %d student gpa: ",i+1);
        scanf("%f", &gpa[i]);
    }
    find(gpa,10);
    return 0;
}