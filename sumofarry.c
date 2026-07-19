//Write a function to calculate the sum of all elements in a matrix.
#include <stdio.h>
void sum(int [][]);
int main()
{
    int sum[3][3];
    sum[3][3]=
        sum(sum);

    return 0;
}
void sum(int sum[3][3])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum[i][j];
        }
    }
    printf("Sum of Matrix is %d",sum);
}