#include <stdio.h>
void add(int[4][4],int[4][4]);
int main()
{
    int m1[4][4]={
                        {10,20,30,40},
                        {50,60,70,80},
                        {90,100,110,120},
                        {130,140,150,160}
                     };
    int m2[4][4]={
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}
                     };
    add(m1,m2);
    return 0;
}
void add(int m1[4][4],int m2[4][4])
{
    int r[4][4];
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<=3; j++)
        {
            r[i][j]=m1[i][j] + m2[i][j];
        }
    }
    for(int k=0;k<=3;k++)
    {
        for(int m=0;m<=3;m++)
        {
            printf("%d ",r[k][m]);
        }
        printf("\n");
    }
}
